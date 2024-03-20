// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_AI_Controller.h"

#include "Kismet/KismetSystemLibrary.h"


void ACPP_AI_Controller::LookForObject()
{
	TArray<TEnumAsByte<EObjectTypeQuery>> objectTypes;
	objectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
	objectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_PhysicsBody));

	TArray<AActor*> ignoreActors;


	TArray<AActor*> hitActors;
	
	UKismetSystemLibrary::SphereOverlapActors(
		GetWorld(),
		GetPawn()->GetActorLocation(),
		300, 
		objectTypes,
		nullptr,
		ignoreActors,
		hitActors
	);


}
