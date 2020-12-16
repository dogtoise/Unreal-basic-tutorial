// Copyright Epic Games, Inc. All Rights Reserved.

#include "TutorialProjectGameMode.h"
#include "TutorialProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorialProjectGameMode::ATutorialProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
