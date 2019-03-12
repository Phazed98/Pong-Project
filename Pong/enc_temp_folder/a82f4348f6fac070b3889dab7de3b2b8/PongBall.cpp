// Copywrite Matthew Battison 2018 - 2019

#include "PongBall.h"

#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaddlePawn.h"
#include "PongGameModeBase.h"

// Sets default values
APongBall::APongBall()
: DefaultMovementSpeed(400)
, PaddleContactFriction(0.3f)
, PaddleCollisionSpeedIncrease(1.1f, 1.5f)
, InitialMagnitudeYRange(0.7f, 0.95f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh0"));
	if (Mesh)
	{
		Mesh->AlwaysLoadOnClient = true;
		Mesh->AlwaysLoadOnServer = true;
		Mesh->bOwnerNoSee = false;
		Mesh->bCastDynamicShadow = true;
		Mesh->bAffectDynamicIndirectLighting = true;
		Mesh->PrimaryComponentTick.TickGroup = TG_PrePhysics;
		Mesh->SetupAttachment(GetRootComponent());
		static FName MeshCollisionProfileName(TEXT("CharacterMesh"));
		Mesh->SetCollisionProfileName(MeshCollisionProfileName);
		Mesh->SetGenerateOverlapEvents(false);
		Mesh->SetCanEverAffectNavigation(false);

		SetRootComponent(Mesh);
	}
}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
	Super::BeginPlay();

	//Force it to go a min speed in the Y direction
	const float InitialDirectionY = (FMath::RandRange(0, 1) * 2) - 1;
	const float InitialMagnitudeY = FMath::FRandRange(InitialMagnitudeYRange.X, InitialMagnitudeYRange.Y);

	const float InitialSpeedX = 1.0f - InitialMagnitudeY;
	const float InitialSpeedY = InitialDirectionY * InitialMagnitudeY;

	MovementDirection = FVector(InitialSpeedX, InitialSpeedY, 0.0f).GetSafeNormal2D();
	InitialLocation = GetActorLocation();
	MovementSpeed = DefaultMovementSpeed;
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateBallMovement(DeltaTime);
	HandleBallCollisions();
}

void APongBall::InvertXMovement()
{
	MovementDirection.X = -MovementDirection.X;
}

void APongBall::InvertYMovement()
{
	MovementDirection.Y = -MovementDirection.Y;

	//When we invert y movement, provide a movement speed bump. This is essentially the difficulty of the game as the ball will continue to get faster
	//Potential future change, move instead of a multiplier as this will get increasingly difficult add a set value so the increase is linear
	MovementSpeed *= FMath::FRandRange(PaddleCollisionSpeedIncrease.X, PaddleCollisionSpeedIncrease.Y);
}

void APongBall::ResetMovementSpeed()
{
	MovementSpeed = DefaultMovementSpeed;
}

void APongBall::UpdateBallMovement(float DeltaTime)
{
	if (USceneComponent* Root = GetRootComponent())
	{
		const FVector DeltaVelocity = MovementDirection * MovementSpeed * DeltaTime;
		Root->MoveComponent(DeltaVelocity, FRotator::ZeroRotator, false);
	}
}

void APongBall::HandleBallCollisions()
{
	if (UWorld* World = GetWorld())
	{
		if (APongGameModeBase* PongGame = Cast<APongGameModeBase>(World->GetAuthGameMode()))
		{
			const FVector CurrentLocation = GetActorLocation();
			const float XDistanceFromCenter = (CurrentLocation.X - InitialLocation.X);
			const float YDistanceFromCenter = (CurrentLocation.Y - InitialLocation.Y);

			//Hit Top or Bottom
			if (FMath::Abs(XDistanceFromCenter) > 800.0f) //TODO: Set it up so that we dont need these Magic Numbers, This is just dependent of the Size of the play Area
			{
				InvertXMovement();
			}

			//Went Past Paddles
			if (FMath::Abs(YDistanceFromCenter) > 1600.0f) //TODO: Set it up so that we dont need these Magic Numbers, This is just dependent of the Size of the play Area
			{
				//Resets the Paddles and Ball to Center
				PongGame->RestartPongGame();

				//Score the miss, for Player 0 or 1
				PongGame->AddPlayerScore(YDistanceFromCenter > 0.0f ? 0 : 1);
			}
			else //Check For Paddle Collisions (Potentially Move to Overlap Tests)
			{
				TArray<APaddlePawn*> PaddleList = PongGame->GetPaddlePawns();
				for (auto* Paddle : PaddleList)
				{
					const FVector BallLocation = GetActorLocation();
					const FVector PaddleLocation = Paddle->GetActorLocation();
					const FVector DistanceBetween = BallLocation - PaddleLocation;

					if (FMath::Abs(DistanceBetween.Y) < 50.0f) //TODO: Set it up so that we dont need these Magic Numbers, This is just dependent of the Size of the paddles/balls
					{
						if (FMath::Abs(DistanceBetween.X) < 150.0f) //TODO: Set it up so that we dont need these Magic Numbers, This is just dependent of the Size of the paddles/balls
						{
							//Bounce, So Invert Y Movement
							InvertYMovement();
							const FVector PaddleVelocity = Paddle->GetVelocity();
							const FVector BallVelocity = MovementDirection * MovementSpeed;

							//Paddle Imparts Some of its Velocity on the ball, controlled by the PaddleContactFriction
							const FVector NewBallVelocity = PaddleVelocity * PaddleContactFriction + BallVelocity;

							MovementDirection = NewBallVelocity.GetSafeNormal();
							MovementSpeed = NewBallVelocity.Size();
						}
					}
				}
			}
		}
	}
}
