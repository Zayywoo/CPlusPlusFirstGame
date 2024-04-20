// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class ULInteractionComponent;
class UAnimMontage;
class ULAttributeComponoent;


UCLASS()
class MYCPLUSPLUS_API ALCharacter : public ACharacter
{

    GENERATED_BODY()
protected:
    UPROPERTY(EditAnywhere, Category = "Attack")
        TSubclassOf<AActor> ProjectileClass;

    UPROPERTY(EditAnywhere, Category = "Attack")
        UAnimMontage* AttackAnim;

    FTimerHandle TimerHandle_PrimaryAttack;
    void MoveForward(float Value);
    void MoveRight(float Value);
    void PrimaryInteract();

    void PrimaryAttack();
    void PrimaryAttack_TimeElapsed();

public:
    // Sets default values for this character's properties
    ALCharacter();

protected:
    UPROPERTY(VisibleAnywhere)
        USpringArmComponent* SpringArmComp;
    UPROPERTY(VisibleAnywhere)
        UCameraComponent* CameraComp;
    
    UPROPERTY(VisibleAnywhere)
        ULInteractionComponent* InteractionComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    ULAttributeComponoent* AttributeComp;



    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
