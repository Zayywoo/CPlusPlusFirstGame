// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LGameplayInterface.h"
#include "LItemChest.generated.h"

class UStaticMeshComponent;

UCLASS()
class MYCPLUSPLUS_API ALItemChest : public AActor, public ILGameplayInterface
{

    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
        float TargetPitch;

    void Interact_Implementation(APawn* InstigatorPawn);



protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
        UStaticMeshComponent* BaseMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
        UStaticMeshComponent* LidMesh;
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    ALItemChest();
};

