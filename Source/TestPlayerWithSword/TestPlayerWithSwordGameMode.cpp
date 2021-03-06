// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestPlayerWithSwordGameMode.h"
#include "TestPlayerWithSwordCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestPlayerWithSwordGameMode::ATestPlayerWithSwordGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Character/Character"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
