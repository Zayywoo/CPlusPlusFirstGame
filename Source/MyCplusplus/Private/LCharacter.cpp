// Fill out your copyright notice in the Description page of Project Settings.


#include "LCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "LInteractionComponent.h"
#include "LAttributeComponoent.h"
// Sets default values
ALCharacter::ALCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;



    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
    SpringArmComp->SetupAttachment(RootComponent);
    SpringArmComp->bUsePawnControlRotation = true;


    CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
    CameraComp->SetupAttachment(SpringArmComp);

    InteractionComp = CreateDefaultSubobject<ULInteractionComponent>("InteractionComp");

    AttributeComp = CreateDefaultSubobject<ULAttributeComponoent>("AttributeComp");

    GetCharacterMovement()->bOrientRotationToMovement = true;


    bUseControllerRotationYaw = false;
}

// Called when the game starts or when spawned
void ALCharacter::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ALCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);


    PlayerInputComponent->BindAxis("MoveForward", this, &ALCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ALCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LoopUp", this, &APawn::AddControllerPitchInput);


    PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &ALCharacter::PrimaryAttack);

    PlayerInputComponent->BindAction("PrimaryInteract", IE_Pressed, this, &ALCharacter::PrimaryInteract);

    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
}

void ALCharacter::MoveForward(float Value)
{
    FRotator ControlRot = GetControlRotation();
    ControlRot.Pitch = 0.0f;
    ControlRot.Roll = 0.0f;

    AddMovementInput(ControlRot.Vector(), Value);
}

void ALCharacter::MoveRight(float Value)
{
    FRotator ControlRot = GetControlRotation();
    ControlRot.Pitch = 0.0f;
    ControlRot.Roll = 0.0f;

    FVector RightVector = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);
    AddMovementInput(RightVector, Value);
}


void ALCharacter::PrimaryAttack()
{
    PlayAnimMontage(AttackAnim);

    GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &ALCharacter::PrimaryAttack_TimeElapsed, 0.2f);



}


void ALCharacter::PrimaryInteract()
{
    if (InteractionComp) {
        InteractionComp->PrimaryInteract();
    }
}


void ALCharacter::PrimaryAttack_TimeElapsed()
{
    if (ensure(ProjectileClass)) {
        FVector HandLocation = GetMesh()->GetSocketLocation("Muzzle_01"); // 绑定人物骨骼---手掌部分


        FTransform SpawnTM = FTransform(GetControlRotation(), HandLocation);
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        SpawnParams.Instigator = this;



        GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);
    }
}
