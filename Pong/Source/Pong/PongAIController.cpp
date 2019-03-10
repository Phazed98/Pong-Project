// Copywrite Matthew Battison 2018 - 2019

#include "PongAIController.h"

#include "PaddlePawn.h"
#include "PongBall.h"
#include "PongGameModeBase.h"

void APongAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TargetBall && MyPaddlePawn)
	{
		//Reset Old Values
		MyPaddlePawn->ClearWantsToMoveDown();
		MyPaddlePawn->ClearWantsToMoveUp();

		//Really Simple Logic for Now, Works Surprisingly Well.
		//Simply have the paddle try to move down if the ball is below, and up if above 
		if (TargetBall->GetActorLocation().X > MyPaddlePawn->GetActorLocation().X)
		{
			MyPaddlePawn->SetWantsToMoveUp();
		}
		else
		{
			MyPaddlePawn->SetWantsToMoveDown();
		}
	}
}

void APongAIController::Possess(APawn* InPawn)
{
	Super::Possess(InPawn);

	//Cache a casted pointer
	if (APaddlePawn* NewPaddlePawn = Cast<APaddlePawn>(InPawn))
	{
		MyPaddlePawn = NewPaddlePawn;
	}

	//For now since we honly have one ball, use the first ball as a target
	if (UWorld* World = GetWorld())
	{
		if (APongGameModeBase* PongGame = Cast<APongGameModeBase>(World->GetAuthGameMode()))
		{
			TArray<APongBall*> Balls = PongGame->GetPongBalls();

			if (Balls.Num() > 0)
			{
				TargetBall = Balls[0];
			}
		}
	}
}
