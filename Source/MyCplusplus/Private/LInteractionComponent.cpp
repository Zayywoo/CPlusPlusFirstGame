// Fill out your copyright notice in the Description page of Project Settings.


#include "LInteractionComponent.h"
#include "LGameplayInterface.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
ULInteractionComponent::ULInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULInteractionComponent::PrimaryInteract()
{
    FCollisionObjectQueryParams ObjectQueryParams;
    ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
    AActor* MyOwner = GetOwner();

    FVector EyeLocation;
    FRotator EyeRotation;
    MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
    FVector End = EyeLocation + (EyeRotation.Vector() * 500);
    //FHitResult Hit;
    //bool bBlockingHit  =  GetWorld()->LineTraceSingleByObjectType(Hit, EyeLocation , End, ObjectQueryParams);

    TArray<FHitResult> Hits;

    float Radius = 30.f;
    FCollisionShape Shape;
    Shape.SetSphere(30.f);

    bool bBlockingHit = GetWorld()->SweepMultiByObjectType(Hits, EyeLocation, End, FQuat::Identity, ObjectQueryParams, Shape);


    FColor LineColor = bBlockingHit ? FColor::Green : FColor::Red;
    for (FHitResult Hit : Hits)
    {
        AActor* HitActor = Hit.GetActor();
        if (HitActor)
        {
	  if (HitActor->Implements<ULGameplayInterface>())//这里类型要用虚幻C++语法，否者会报错
	  {
	      APawn* MyPawn = Cast<APawn>(MyOwner);
	      ILGameplayInterface::Execute_Interact(HitActor, MyPawn);
	      break;
	  }
        }
        DrawDebugSphere(GetWorld(), Hit.ImpactPoint, Radius, 32, LineColor);
    }



    DrawDebugLine(GetWorld(), EyeLocation, End, LineColor, false, 2.0f, 0, 2.0f);


}