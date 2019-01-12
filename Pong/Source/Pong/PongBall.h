// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongBall.generated.h"

UCLASS()
class PONG_API APongBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APongBall();

	/** The main mesh associated with this Paddle (optional sub-object). */
	UPROPERTY(Category = BallMesh, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void InvertXMovement();
	void InvertYMovement();

protected:

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float DefaultMovementSpeed;

private:

	UPROPERTY(Transient)
	FVector MovementDirection;

	UPROPERTY(Transient)
	FVector InitialLocation;

	UPROPERTY(Transient)
	float MovementSpeed;
};
