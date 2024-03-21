// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StructsAndEnums.generated.h"

UENUM(Blueprintable)s
enum class E_ItemType : uint8 {
	None			UMETA(DisplayName="None"),
	IT_Bow          UMETA(DisplayName="Bow"),
	IT_Sword        UMETA(DisplayName="Sword")
};

USTRUCT(Blueprintable)
struct FInventorySlots
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	E_ItemType ItemType;
	UPROPERTY(BlueprintReadWrite)
	int Count;
};

