// Copywrite Matthew Battison 2018 - 2019

#include "PongBall.h"

#include "PongGameModeBase.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APongBall::APongBall()
: DefaultMovementSpeed(5)
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

	MovementDirection = FVector(FMath::FRandRange(-1.0f, 1.0f), FMath::FRandRange(-1.0f, 1.0f), 0.0f).GetSafeNormal2D();	
	InitialLocation = GetActorLocation();
	MovementSpeed = DefaultMovementSpeed;
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (USceneComponent* Root = GetRootComponent())
	{
		Root->MoveComponent(MovementDirection * MovementSpeed, FRotator::ZeroRotator, false);
	}

	const FVector CurrentLocation = GetActorLocation();
	const float XDistanceFromCenter = FMath::Abs(CurrentLocation.X - InitialLocation.X);
	const float YDistanceFromCenter = FMath::Abs(CurrentLocation.Y - InitialLocation.Y);

	if (XDistanceFromCenter > 800.0f)
	{
		InvertXMovement();
	}

	if (YDistanceFromCenter > 1600.0f)
	{
		InvertYMovement();
		if (UWorld* World = GetWorld())
		{
			if (APongGameModeBase* PongGame = Cast<APongGameModeBase>(World->GetAuthGameMode()))
			{
				PongGame->RestartPongGame();
			}
		}
	}
}

void APongBall::InvertXMovement()
{
	MovementDirection.X = -MovementDirection.X;
}
void APongBall::InvertYMovement()
{
	MovementDirection.Y = -MovementDirection.Y;
}