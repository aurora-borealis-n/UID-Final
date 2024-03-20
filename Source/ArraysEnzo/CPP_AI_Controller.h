// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CPP_AI_Controller.generated.h"

/**
 * 
 */
UCLASS()
class ARRAYSENZO_API ACPP_AI_Controller : public AAIController
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	void LookForObject();
};
