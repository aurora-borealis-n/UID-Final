// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/UserDefinedEnum.h"
#include "UObject/Interface.h"
#include "InventoryManager.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
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
	virtual void AddItem(E_ItemType item) = 0;
	virtual void GetItem(int index) = 0;
	virtual void RemoveItem(int index) = 0;
};


class ARRAYSENZO_API InventoryManager : public IInventoryManager
{
	TArray<UUserDefinedStruct*> Items;
public:
	void AddItem(E_ItemType item) override;
	void GetItem(int index) override;
	void RemoveItem(int index) override;
};


