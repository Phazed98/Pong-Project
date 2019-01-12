// Copywrite Matthew Battison 2018 - 2019

#include "PaddlePawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PongBall.h"

// Sets default values
APaddlePawn::APaddlePawn()
	: DefaultMovementSpeed(5.0f)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaddleMesh0"));
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
	}

}

// Called when the game starts or when spawned
void APaddlePawn::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();

	MovementSpeed = DefaultMovementSpeed;
	
}

// Called every frame
void APaddlePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector CurrentLocation = GetActorLocation();
	const float XDistanceFromCenter = CurrentLocation.X - InitialLocation.X;

	if (XDistanceFromCenter > 800.0f)
	{
		bWantsToMoveUp = false;
	}
	else if (XDistanceFromCenter < -800.0f)
	{
		bWantsToMoveDown = false;
	}

	if ((bWantsToMoveUp && bWantsToMoveDown) || (!bWantsToMoveUp &&!bWantsToMoveDown))
	{
		//Do Nothing, either they are holding both inputs or they are holding none
	}
	else if (bWantsToMoveUp)
	{
		if (USceneComponent* Root = GetRootComponent())
		{
			Root->MoveComponent(FVector(MovementSpeed, 0, 0), FRotator::ZeroRotator, false);
		}
	}
	else
	{
		if (USceneComponent* Root = GetRootComponent())
		{
			Root->MoveComponent(FVector(-MovementSpeed, 0, 0), FRotator::ZeroRotator, false);
		}
	}

	//Super Hacky Just to test - Basically Get All the possible Balls, And do a simple Radius check on them, if they are within the radius Invert its movement
	if (UWorld* World = GetWorld())
	{
		TArray<AActor*> BallList;
		UGameplayStatics::GetAllActorsOfClass(World, APongBall::StaticClass(), BallList);

		for (auto* Ball : BallList)
		{
			const FVector BallLocation = Ball->GetActorLocation();
			const FVector PaddleLocation = GetActorLocation();
			const FVector DistanceBetween = BallLocation - PaddleLocation;

			if (FMath::Abs(DistanceBetween.Y) < 50.0f)
			{
				if (FMath::Abs(DistanceBetween.X) < 100.0f)
				{
					if (APongBall* BallToHit = Cast<APongBall>(Ball))
					{
						BallToHit->InvertYMovement();
					}
				}
			}
		}
	
		//if (AGameModeBase* GameMode = World->GetAuthGameMode())
		//{
		//
		//}
	}
}

// Called to bind functionality to input
void APaddlePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	static const FName MoveUpName(TEXT("MoveUp"));
	static const FName MoveDownName(TEXT("MoveDown"));

	if (InputComponent != nullptr)
	{
		// Up events setup
		{
			FInputActionBinding UpPressed(MoveUpName, IE_Pressed);
			UpPressed.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APaddlePawn::OnMoveUpPressed);
			InputComponent->AddActionBinding(UpPressed);

			FInputActionBinding UpReleased(MoveUpName, IE_Released);
			UpReleased.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APaddlePawn::OnMoveUpReleased);
			InputComponent->AddActionBinding(UpReleased);
		}

		// Down Events Setup
		{
			FInputActionBinding DownPressed(MoveDownName, IE_Pressed);
			DownPressed.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APaddlePawn::OnMoveDownPressed);
			InputComponent->AddActionBinding(DownPressed);

			FInputActionBinding DownReleased(MoveDownName, IE_Released);
			DownReleased.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APaddlePawn::OnMoveDownReleased);
			InputComponent->AddActionBinding(DownReleased);
		}
	}
}

void APaddlePawn::OnMoveUpPressed()
{
	bWantsToMoveUp = true;
}

void APaddlePawn::OnMoveDownPressed()
{
	bWantsToMoveDown = true;
}

void APaddlePawn::OnMoveUpReleased()
{
	bWantsToMoveUp = false;
}

void APaddlePawn::OnMoveDownReleased()
{
	bWantsToMoveDown = false;
}
