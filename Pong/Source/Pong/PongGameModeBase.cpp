// Copywrite Matthew Battison 2018 - 2019

#include "PongGameModeBase.h"

#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Kismet/GameplayStatics.h"
#include "PaddlePawn.h"
#include "PongBall.h"

void APongGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	UWorld* World = GetWorld();

	if (World == nullptr)
	{
		return;
	}

	//The Way its set up currently, the level has all the required already set up. So when we Init the game we have to find them and match them to the associated arrays
	//This was primarily me wanting to see how the Tags actually worked and can probably be done better

	static const FName BackgroundTag = FName(TEXT("Background"));
	static const FName PawnTag = FName(TEXT("PlayerPawn"));
	static const FName BallTag = FName(TEXT("PongBall"));

	TArray<AActor*> BackgroundActor;
	UGameplayStatics::GetAllActorsWithTag(World, BackgroundTag, BackgroundActor);

	check(BackgroundActor.Num() == 1);

	TArray<AActor*> PlayerPawns;
	UGameplayStatics::GetAllActorsWithTag(World, PawnTag, PlayerPawns);

	check(PlayerPawns.Num() == 2);

	TArray<AActor*> PongBall;
	UGameplayStatics::GetAllActorsWithTag(World, BallTag, PongBall);

	check(PongBall.Num() == 1);

	TArray<AActor*> AllCameras;
	UGameplayStatics::GetAllActorsOfClass(World, ACameraActor::StaticClass(), AllCameras);

	check(AllCameras.Num() == 1);

	CameraActor = Cast<ACameraActor>(AllCameras[0]);
	BackGroundMeshActor = Cast<AStaticMeshActor>(BackgroundActor[0]);
	Balls.Add(Cast<APongBall>(PongBall[0]));

	for (int32 Index = 0; Index < PlayerPawns.Num(); ++Index)
	{
		PaddlePawns.Add(Cast<APaddlePawn>(PlayerPawns[Index]));
	}

	//Zero out the player Scores, this is used primarily by the HUD
	PlayerScores.AddZeroed(PaddlePawns.Num());

	//Send all the actors to thier start points. 
	//This is mostly so I dont actually have to setup the level and figure out positions, but it allows for some interesting stuff in the future where we get to programatically figure out the correct places for everything
	RestartPongGame();
}

void APongGameModeBase::RestartPongGame()
{
	FVector BoundsOrigin = FVector::ZeroVector;
	FVector BoundsExtent = FVector::ZeroVector;

	//Basically everything is 0 offset so align it all to 0 
	if (BackGroundMeshActor != nullptr)
	{
		BackGroundMeshActor->SetActorLocation(FVector::ZeroVector); 
		BackGroundMeshActor->GetActorBounds(false, BoundsOrigin, BoundsExtent); // Note, This origin is not the actor location, it finds the origin of the extents
	}

	if (PaddlePawns[0] != nullptr)
	{
		PaddlePawns[0]->SetActorLocation(FVector(BoundsOrigin.X, BoundsOrigin.Y - BoundsExtent.Y, 0.0f));
		PaddlePawns[0]->SetMovementBounds(BoundsOrigin.X - BoundsExtent.X , BoundsOrigin.X + BoundsExtent.X);
	}

	if (PaddlePawns[1] != nullptr)
	{
		PaddlePawns[1]->SetActorLocation(FVector(BoundsOrigin.X, BoundsOrigin.Y + BoundsExtent.Y, 0.0f));
		PaddlePawns[1]->SetMovementBounds(BoundsOrigin.X - BoundsExtent.X, BoundsOrigin.X + BoundsExtent.X);
	}

	if (Balls[0] != nullptr)
	{
		Balls[0]->SetActorLocation(FVector(BoundsOrigin.X, BoundsOrigin.Y, 0.0f));
		Balls[0]->ResetMovementSpeed();
		Balls[0]->SetMovementBounds(BoundsOrigin - BoundsExtent, BoundsOrigin + BoundsExtent);
	}

	if (CameraActor && CameraActor->GetCameraComponent())
	{
		CameraActor->SetActorLocation(FVector(BoundsOrigin.X, BoundsOrigin.Y, 1400.0f));
		CameraActor->GetCameraComponent()->SetOrthoWidth(BoundsExtent.Y * 2.0f);
		CameraActor->GetCameraComponent()->SetAspectRatio(BoundsExtent.Y / BoundsExtent.X);
	}
}

void APongGameModeBase::AddPlayerScore(int32 PlayerIndex)
{
	if (PlayerScores.IsValidIndex(PlayerIndex))
	{
		PlayerScores[PlayerIndex]++;
	}
}

int32 APongGameModeBase::GetPlayerScore(int32 PlayerIndex) const
{
	if (PlayerScores.IsValidIndex(PlayerIndex))
	{
		return PlayerScores[PlayerIndex];
	}

	return -1;
}

