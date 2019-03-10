// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "AIController.h"
#include "CoreMinimal.h"

#include "PongAIController.generated.h"

class APongBall;
class APaddlePawn;

UCLASS()
class PONG_API APongAIController : public AAIController
{
	GENERATED_BODY()

public:
	
	virtual void Tick(float DeltaTime) override;
	virtual void Possess(APawn* InPawn) override;

protected:

private:

	UPROPERTY(Transient)
	APaddlePawn* MyPaddlePawn;

	UPROPERTY(Transient)
	APongBall* TargetBall;
};
