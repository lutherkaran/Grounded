// Copyright Epic Games, Inc. All Rights Reserved.

#include "GroundedGameMode.h"
#include "GroundedHUD.h"
#include "GroundedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroundedGameMode::AGroundedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behavior/PlayerBP"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGroundedHUD::StaticClass();
}
