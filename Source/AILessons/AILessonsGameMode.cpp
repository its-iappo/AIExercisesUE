// Copyright Epic Games, Inc. All Rights Reserved.

#include "AILessonsGameMode.h"
#include "AILessonsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAILessonsGameMode::AAILessonsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
