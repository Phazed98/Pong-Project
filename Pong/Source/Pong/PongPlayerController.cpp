// Copywrite Matthew Battison 2018 - 2019

#include "PongPlayerController.h"

#include "PaddlePawn.h"
#include "PongBall.h"
#include "PongGameModeBase.h"

void APongPlayerController::Possess(APawn* InPawn)
{
	Super::Possess(InPawn);

	//Cache of a casted version of the Pawn
	if (APaddlePawn* NewPaddlePawn = Cast<APaddlePawn>(InPawn))
	{
		MyPaddlePawn = NewPaddlePawn;
	}
}

void APongPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	static const FName MoveUpName(TEXT("MoveUp"));
	static const FName MoveDownName(TEXT("MoveDown"));

	if (InputComponent != nullptr)
	{
		// Up events setup
		{
			FInputActionBinding UpPressed(MoveUpName, IE_Pressed);
			UpPressed.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APongPlayerController::SetWantsToMoveUp);
			InputComponent->AddActionBinding(UpPressed);

			FInputActionBinding UpReleased(MoveUpName, IE_Released);
			UpReleased.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APongPlayerController::ClearWantsToMoveUp);
			InputComponent->AddActionBinding(UpReleased);
		}

		// Down Events Setup
		{
			FInputActionBinding DownPressed(MoveDownName, IE_Pressed);
			DownPressed.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APongPlayerController::SetWantsToMoveDown);
			InputComponent->AddActionBinding(DownPressed);

			FInputActionBinding DownReleased(MoveDownName, IE_Released);
			DownReleased.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &APongPlayerController::ClearWantsToMoveDown);
			InputComponent->AddActionBinding(DownReleased);
		}
	}
}

void APongPlayerController::SetWantsToMoveUp()
{
	if (MyPaddlePawn)
	{
		MyPaddlePawn->SetWantsToMoveUp();
	}
}

void APongPlayerController::SetWantsToMoveDown()
{
	if (MyPaddlePawn)
	{
		MyPaddlePawn->SetWantsToMoveDown();
	}
}

void APongPlayerController::ClearWantsToMoveUp()
{
	if (MyPaddlePawn)
	{
		MyPaddlePawn->ClearWantsToMoveUp();
	}
}

void APongPlayerController::ClearWantsToMoveDown()
{
	if (MyPaddlePawn)
	{
		MyPaddlePawn->ClearWantsToMoveDown();
	}
}
