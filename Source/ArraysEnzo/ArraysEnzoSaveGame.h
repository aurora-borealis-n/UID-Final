// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ArraysEnzoSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class ARRAYSENZO_API UArraysEnzoSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform PlayerTransform;
};
