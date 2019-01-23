// Copywrite Matthew Battison 2018 - 2019

#include "PongGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "PongBall.h"
#include "PaddlePawn.h"
#include "Engine/StaticMeshActor.h"
#include "Camera/CameraActor.h"

void APongGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	UWorld* World = GetWorld();

	if (World == nullptr)
	{
		return;
	}

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

	RestartPongGame();
}

void APongGameModeBase::RestartPongGame()
{
	if (BackGroundMeshActor != nullptr)
	{
		BackGroundMeshActor->SetActorLocation(FVector::ZeroVector);
	}

	if (PaddlePawns[0] != nullptr)
	{
		PaddlePawns[0]->SetActorLocation(FVector(800.0f, 50.0f, 0.0f));
	}

	if (PaddlePawns[1] != nullptr)
	{
		PaddlePawns[1]->SetActorLocation(FVector(800.0f, 2750.0f, 0.0f));
	}

	if (Balls[0] != nullptr)
	{
		Balls[0]->SetActorLocation(FVector(800.0f, 1400.0f, 0.0f));
	}
}
