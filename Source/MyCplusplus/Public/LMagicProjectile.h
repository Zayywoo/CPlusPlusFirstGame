// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;


UCLASS()
class MYCPLUSPLUS_API ALMagicProjectile : public AActor
{

    GENERATED_BODY()
protected:

public:
    // Sets default values for this actor's properties
    ALMagicProjectile();

protected:
    UFUNCTION()
        void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
        USphereComponent* SphereComp;

    UPROPERTY(VisibleAnywhere)
        UProjectileMovementComponent* MovementComp;

    UPROPERTY(VisibleAnywhere)
        UParticleSystemComponent* EffectComp;
   

};
