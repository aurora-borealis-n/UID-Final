// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InventoryManager.h"
#include "GameFramework/GameModeBase.h"
#include "ArraysEnzoGameMode.generated.h"




UCLASS(minimalapi)
class AArraysEnzoGameMode : public AGameModeBase
{
	GENERATED_BODY()

	IInventoryManager* InventoryMan;
public:
	AArraysEnzoGameMode();

	IInventoryManager* GetInventoryManager();

	UFUNCTION(BlueprintCallable)
	void AddItem(E_ItemType item);
};



