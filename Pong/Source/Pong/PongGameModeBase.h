// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PONG_API APongGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	/**
	 * Initialize the game.
	 * The GameMode's InitGame() event is called before any other functions (including PreInitializeComponents() )
	 * and is used by the GameMode to initialize parameters and spawn its helper classes.
	 * @warning: this is called before actors' PreInitializeComponents.
	 */
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

public:
	void RestartPongGame();

protected:

	UPROPERTY(Transient)
	TArray<class APaddlePawn*> PaddlePawns;

	UPROPERTY(Transient)
	TArray<class APongBall*> Balls;

	UPROPERTY(Transient)
	class AStaticMeshActor* BackGroundMeshActor;

	UPROPERTY(Transient)
	class ACameraActor* CameraActor;

};
