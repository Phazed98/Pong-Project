// Copywrite Matthew Battison 2018 - 2019

#include "PongHUD.h"

#include "Engine/Canvas.h"
#include "PongGameModeBase.h"

void APongHUD::DrawHUD()
{
	Super::DrawHUD();

	if (Canvas)
	{
		if (UWorld* World = GetWorld())
		{
			if (APongGameModeBase* PongGame = Cast<APongGameModeBase>(World->GetAuthGameMode()))
			{
				//Simple but effective UI for the Game, Draws the score at the top center
				//TODO: Find out how to do better text / font Scaling, It is currently pixilated

				const int32 Score1 = PongGame->GetPlayerScore(0);
				const int32 Score2 = PongGame->GetPlayerScore(1);
				
				FString ScoreString = FString::Printf(TEXT("%i | %i"), Score1, Score2);

				UFont* Font = GetFontFromSizeIndex(4);
				
				const float TextScale = 6.0f;

				float TextHeight = 0.0f;
				float TextWidth = 0.0f;
				GetTextSize(ScoreString, TextWidth, TextHeight, Font, TextScale);

				const float DrawX = (Canvas->SizeX / 2.0f) - (TextWidth / 2.0f);
				const float DrawY = 20.0f; //Just Push it down a little from the top

				DrawText(ScoreString, FLinearColor::White, DrawX, DrawY, Font, TextScale);
			}
		}
	}
}
