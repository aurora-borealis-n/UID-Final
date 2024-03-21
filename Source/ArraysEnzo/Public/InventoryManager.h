// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StructsAndEnums.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/UserDefinedEnum.h"
#include "UObject/Interface.h"
#include "InventoryManager.generated.h"



// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType, Meta=(CannotImplementInterfaceInBlueprint))
class UInventoryManager : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARRAYSENZO_API IInventoryManager
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable)
	virtual void AddItem(E_ItemType item) = 0;
	UFUNCTION(BlueprintCallable)
	virtual E_ItemType GetItem(int index) = 0;
	UFUNCTION(BlueprintCallable)
	virtual void RemoveItem(int index) = 0;
	UFUNCTION(BlueprintCallable)
	virtual FString PrintItems() = 0;
	UFUNCTION(BlueprintCallable)
	virtual TArray<FInventorySlots> GetAllItems() = 0;
  };

UCLASS(BlueprintType)
class ARRAYSENZO_API UInventory : public UClass, public IInventoryManager
{
	GENERATED_BODY()
	int MaxSize = 10;
	TArray<FInventorySlots> Items;
public:


	UInventory() {  }
	void AddItem(E_ItemType item) override;
	E_ItemType GetItem(int index) override;
	void RemoveItem(int index) override;
	TArray<FInventorySlots> GetAllItems() override;
	
	FString PrintItems() override;
};


