// Copywrite Matthew Battison 2018 - 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"

#include "PongHUD.generated.h"

/**
 * 
 */
UCLASS()
class PONG_API APongHUD : public AHUD
{
	GENERATED_BODY()

	/** The Main Draw loop for the hud.  Gets called before any messaging.  Should be subclassed */
	virtual void DrawHUD() override;
};
