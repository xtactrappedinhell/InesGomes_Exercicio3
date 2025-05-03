// Copyright Epic Games, Inc. All Rights Reserved.

#include "Program_Exercicio3GameMode.h"
#include "Program_Exercicio3Character.h"
#include "UObject/ConstructorHelpers.h"

AProgram_Exercicio3GameMode::AProgram_Exercicio3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
