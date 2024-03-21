// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManager.h"

// Add default functionality here for any IInventoryManager functions that are not pure virtual.
void UInventory::AddItem(E_ItemType item)
{
	if(Items.Num() >= MaxSize)
		return;
	
	FInventorySlots slot;
	slot.ItemType = item;
	slot.Count = 1;
	Items.Push(slot);
}

E_ItemType UInventory::GetItem(int index)
{
	if(Items.Num() <= index)
		return E_ItemType::None;
	
	return Items[index].ItemType;
}

void UInventory::RemoveItem(int index)
{
	if(Items.Num() <= index)
		return;
	
	Items.RemoveAt(index);
}

TArray<FInventorySlots> UInventory::GetAllItems()
{
	return Items;
}

FString UInventory::PrintItems()
{
	FString test = "";
	for(int i = 0; i < Items.Num(); i++)
	{
		test += UEnum::GetValueAsName(Items[i].ItemType).ToString() ;
	}
	return test;
}	
