// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GroundedHUD.generated.h"

UCLASS()
class AGroundedHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGroundedHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

