// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LAttributeComponoent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYCPLUSPLUS_API ULAttributeComponoent : public UActorComponent
{
    GENERATED_BODY()

public:

    // Sets default values for this component's properties
    ULAttributeComponoent();

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
    float Health;
  
public:
    UFUNCTION(BlueprintCallable, Category = "Attributes")
    bool ApplyHealthChange(float Delta);
   

};
