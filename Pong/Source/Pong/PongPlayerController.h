// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "PongPlayerController.generated.h"

class APongBall;
class APaddlePawn;

/**
 * 
 */
UCLASS()
class PONG_API APongPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void Possess(APawn* InPawn) override;
	
protected:

	/** Allows the PlayerController to set up custom input bindings. */
	virtual void SetupInputComponent() override;

	void SetWantsToMoveUp();
	void SetWantsToMoveDown();

	void ClearWantsToMoveUp();
	void ClearWantsToMoveDown();

private:

	UPROPERTY(Transient)
	APaddlePawn* MyPaddlePawn;

};
