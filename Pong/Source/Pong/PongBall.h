// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PongBall.generated.h"

UCLASS(Blueprintable, CollapseCategories, HideCategories = (Lighting, Rendering, "Component Replication", Replication, Input, Actor, HLOD, Mobile, "Asset User Data"))
class PONG_API APongBall : public AActor
{
	GENERATED_BODY()
	
public:	

	//Default Constructor
	APongBall();

	// The main mesh associated with this Paddle (optional sub-object).
	UPROPERTY(Category = BallMesh, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void InvertXMovement();
	void InvertYMovement();
	void ResetMovementSpeed();

	FVector GetBallBounds() { return BallBounds; }

	void SetMovementBounds(FVector MinBounds, FVector MaxBounds);

protected:

	void UpdateBallMovement(float DeltaTime);
	void HandleBallCollisions();

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float DefaultMovementSpeed;

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float PaddleContactFriction;

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	FVector2D PaddleCollisionSpeedIncrease;

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	FVector2D InitialMagnitudeYRange;

private:

	UPROPERTY(Transient)
	FVector MovementDirection;

	UPROPERTY(Transient)
	FVector InitialLocation;

	UPROPERTY(Transient)
	float MovementSpeed;

	UPROPERTY(Transient)
	FVector BallBounds;

	UPROPERTY(Transient)
	FVector MinMovementBounds;

	UPROPERTY(Transient)
	FVector MaxMovementBounds;
};
