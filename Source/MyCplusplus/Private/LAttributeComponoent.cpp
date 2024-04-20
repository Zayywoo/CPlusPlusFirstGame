// Fill out your copyright notice in the Description page of Project Settings.


#include "LAttributeComponoent.h"

// Sets default values for this component's properties
ULAttributeComponoent::ULAttributeComponoent()
{
	Health = 100;
}

bool ULAttributeComponoent::ApplyHealthChange(float Delta)
{
    Health += Delta;

    return true;
}