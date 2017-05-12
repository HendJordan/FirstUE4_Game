// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Project1.h"
#include "Project1GameMode.h"
#include "Project1HUD.h"
#include "Project1Character.h"

AProject1GameMode::AProject1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject1HUD::StaticClass();
}
