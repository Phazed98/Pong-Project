// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaddlePawn.generated.h"

UCLASS()
class PONG_API APaddlePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddlePawn();

	/** The main mesh associated with this Paddle (optional sub-object). */
	UPROPERTY(Category = PaddleMesh, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnMoveUpPressed();
	void OnMoveDownPressed();

	void OnMoveUpReleased();
	void OnMoveDownReleased();

protected:

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float DefaultMovementSpeed;

private:

	UPROPERTY(Transient)
	FVector InitialLocation;

	UPROPERTY(Transient)
	float MovementSpeed;

	UPROPERTY(Transient)
	bool bWantsToMoveUp;

	UPROPERTY(Transient)
	bool bWantsToMoveDown;
};
