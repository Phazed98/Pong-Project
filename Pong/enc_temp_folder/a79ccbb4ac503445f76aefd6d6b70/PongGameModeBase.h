// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "PongGameModeBase.generated.h"

class APongBall;
class APaddlePawn;
class AStaticMeshActor;
class ACameraActor;

/**
 * 
 */
UCLASS()
class PONG_API APongGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	/**
	 * Initialize the game.
	 * The GameMode's InitGame() event is called before any other functions (including PreInitializeComponents() )
	 * and is used by the GameMode to initialize parameters and spawn its helper classes.
	 * @warning: this is called before actors' PreInitializeComponents.
	 */
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	//Send all the actors to thier initial positions
	void RestartPongGame();

	//Returns the Array of found pong balls
	TArray<APongBall*>& GetPongBalls() { return Balls; }

	//Returns the Array of found pong balls
	TArray<APaddlePawn*>& GetPaddlePawns() { return PaddlePawns; }

	//Adds a single point to the player in the specified index
	void AddPlayerScore(int32 PlayerIndex);

	//Returns the score of the player at the specified index
	int32 GetPlayerScore(int32 PlayerIndex) const; 
	
protected:

private:

	UPROPERTY(Transient)
	TArray<APaddlePawn*> PaddlePawns;

	UPROPERTY(Transient)
	TArray<APongBall*> Balls;

	UPROPERTY(Transient)
	AStaticMeshActor* BackGroundMeshActor;

	UPROPERTY(Transient)
	ACameraActor* CameraActor;

	UPROPERTY(Transient)
	TArray<int32> PlayerScores;
};
