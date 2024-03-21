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

	TScriptInterface<IInventoryManager> InventoryManager;
	// UInventory* InventoryMan;
public:
	AArraysEnzoGameMode();

	UFUNCTION(BlueprintCallable)
	TScriptInterface<IInventoryManager> GetInventoryManager();
	
};



