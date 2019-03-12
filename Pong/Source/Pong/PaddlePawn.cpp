// Copywrite Matthew Battison 2018 - 2019

#include "PaddlePawn.h"

#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/HUD.h"
#include "PongBall.h"

// Sets default values
APaddlePawn::APaddlePawn()
	: DefaultMovementSpeed(400.0f)
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

	FVector UnusedVector;
	GetActorBounds(false, UnusedVector, PaddleBounds);
}

// Called every frame
void APaddlePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdatePaddleMovement(DeltaTime);
}


void APaddlePawn::UpdatePaddleMovement(float DeltaTime)
{
	const FVector CurrentLocation = GetActorLocation();
	const float XDistanceFromCenter = CurrentLocation.X - InitialLocation.X;

	//Constrain the Movement to reasonable Distances from where we started
	if (CurrentLocation.X + PaddleBounds.X > MaxMovementBound)
	{
		bWantsToMoveUp = false;
	}
	else if (CurrentLocation.X - PaddleBounds.X < MinMovementBound)
	{
		bWantsToMoveDown = false;
	}

	if (USceneComponent* Root = GetRootComponent())
	{
		const FVector DeltaVelocity = GetVelocity() * DeltaTime;
		Root->MoveComponent(DeltaVelocity, FRotator::ZeroRotator, false);
	}
}

FVector APaddlePawn::GetVelocity() const
{
	if ((bWantsToMoveUp && bWantsToMoveDown) || (!bWantsToMoveUp && !bWantsToMoveDown))
	{
		return FVector::ZeroVector;
	}
	else if (bWantsToMoveUp)
	{
		return FVector(MovementSpeed, 0, 0);
	}
	else
	{
		return FVector(-MovementSpeed, 0, 0);
	}
}

void APaddlePawn::SetWantsToMoveUp()
{
	bWantsToMoveUp = true;
}

void APaddlePawn::SetWantsToMoveDown()
{
	bWantsToMoveDown = true;
}

void APaddlePawn::ClearWantsToMoveUp()
{
	bWantsToMoveUp = false;
}

void APaddlePawn::ClearWantsToMoveDown()
{
	bWantsToMoveDown = false;
}

void APaddlePawn::SetMovementBounds(float MinBound, float MaxBound)
{
	MinMovementBound = MinBound; 
	MaxMovementBound = MaxBound;
}