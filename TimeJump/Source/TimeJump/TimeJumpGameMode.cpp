// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimeJumpGameMode.h"
#include "TimeJumpCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimeJumpGameMode::ATimeJumpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
