// Fill out your copyright notice in the Description page of Project Settings.


#include "LAttributeComponoent.h"

// Sets default values for this component's properties
ULAttributeComponoent::ULAttributeComponoent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Health = 100;
}






bool ULAttributeComponoent::ApplyHealthChange(float Delta)
{
    Health += Delta;

    return true;
}