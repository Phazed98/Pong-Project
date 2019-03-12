// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "PaddlePawn.generated.h"

UCLASS(Blueprintable, CollapseCategories, HideCategories = (Lighting, Rendering, "Component Replication", Replication, Input, Actor, HLOD, Mobile, "Asset User Data"))
class PONG_API APaddlePawn : public APawn
{
	GENERATED_BODY()

public:

	//Default Constructor
	APaddlePawn();

	// The main mesh associated with this Paddle (optional sub-object).
	UPROPERTY(Category = PaddleMesh, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual FVector GetVelocity() const override;

	void SetWantsToMoveUp();
	void SetWantsToMoveDown();

	void ClearWantsToMoveUp();
	void ClearWantsToMoveDown();

	FVector GetPaddleBounds() { return PaddleBounds; }

	void SetMovementBounds(float MinBound, float MaxBound);

protected:

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float DefaultMovementSpeed;

	void UpdatePaddleMovement(float DeltaTime);

private:

	UPROPERTY(Transient)
	FVector InitialLocation;

	UPROPERTY(Transient)
	float MovementSpeed;

	UPROPERTY(Transient)
	bool bWantsToMoveUp;

	UPROPERTY(Transient)
	bool bWantsToMoveDown;

	UPROPERTY(Transient)
	float MinMovementBound;

	UPROPERTY(Transient)
	float MaxMovementBound;

	FVector PaddleBounds;

};
