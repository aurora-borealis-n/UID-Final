// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArraysEnzoGameMode.h"
#include "ArraysEnzoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArraysEnzoGameMode::AArraysEnzoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

IInventoryManager* AArraysEnzoGameMode::GetInventoryManager()
{
	if(InventoryMan == nullptr)
	{
		InventoryMan = new InventoryManager();
	}
	return InventoryMan;
}

void AArraysEnzoGameMode::AddItem(E_ItemType item)
{
	GetInventoryManager()->AddItem(item);
}
