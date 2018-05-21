// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DuckHuntGameMode.h"
#include "DuckHuntHUD.h"
#include "DuckHuntCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADuckHuntGameMode::ADuckHuntGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADuckHuntHUD::StaticClass();
}
