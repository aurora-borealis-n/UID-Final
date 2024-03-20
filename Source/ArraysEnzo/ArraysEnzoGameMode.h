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


UENUM(BlueprintType)
enum class E_ItemType : uint8 {
	IT_Bow          UMETA(DisplayName="Bowow"),
	IT_Sword        UMETA(DisplayName="Swordord"),
};

