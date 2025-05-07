// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemCore.generated.h"

/**
 * The main component of unit functionality
 */
UCLASS(ClassGroup = "Custom", meta = (BlueprintSpawnableComponent))
class PROJECTMDC_API UAbilitySystemCore : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "VALUE")
	int32 someint2 = 15;
	
};
