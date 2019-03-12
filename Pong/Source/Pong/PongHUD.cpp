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
				
				FString Player1ScoreString = FString::Printf(TEXT("%i"), Score1);
				FString Player2ScoreString = FString::Printf(TEXT("%i"), Score2);

				UFont* Font = ScoreFont ? ScoreFont : GetFontFromSizeIndex(4);
				
				const float TextScale = 1.0f;
				const float DrawY = 20.0f; //Just Push it down a little from the top


				float TextHeight = 0.0f;
				float TextWidth = 0.0f;
				GetTextSize(Player1ScoreString, TextWidth, TextHeight, Font, TextScale);

				const float Player1DrawX = (Canvas->SizeX / 4.0f) - (TextWidth / 2.0f);
				
				DrawText(Player1ScoreString, FLinearColor::White, Player1DrawX, DrawY, Font, TextScale);

				GetTextSize(Player1ScoreString, TextWidth, TextHeight, Font, TextScale);

				const float Player2DrawX = Canvas->SizeX - (Canvas->SizeX / 4.0f) - (TextWidth / 2.0f);
				const float Player2DrawY = 20.0f; //Just Push it down a little from the top

				DrawText(Player2ScoreString, FLinearColor::White, Player2DrawX, DrawY, Font, TextScale);

				//Draw Lines Down the Center, this could probably be done in the background amterial instead but its fine for now here

				static const float LineSize = 50.0f;
				static const float LineSpacing = 30.0f;
				static const float LineThickness = 5.0f;
				float LineStartY = 15.0f;
				float LineEndY = LineStartY + LineSize;
				float LineX = Canvas->SizeX / 2.0f;

				while (LineStartY < Canvas->SizeY)
				{

					DrawLine(LineX, LineStartY, LineX, LineEndY, FLinearColor::White, LineThickness);

					LineStartY = LineEndY + LineSpacing;
					LineEndY = LineStartY + LineSize;
				}
			}
		}
	}
}
