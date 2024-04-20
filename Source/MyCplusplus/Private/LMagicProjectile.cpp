// Fill out your copyright notice in the Description page of Project Settings.


#include "LMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "particles/ParticleSystemComponent.h"
#include "LAttributeComponoent.h"

// Sets default values
ALMagicProjectile::ALMagicProjectile()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
    SphereComp->SetCollisionProfileName("Projectile");
    SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ALMagicProjectile::OnActorOverlap);
    RootComponent = SphereComp;

    EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
    EffectComp->SetupAttachment(SphereComp);

    MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
    MovementComp->InitialSpeed = 1000.0f; // 寮逛父鐨勫垵濮嬮?熷害
    MovementComp->bRotationFollowsVelocity = true; // 濡傛灉涓虹湡锛屽垵濮嬮?熷害鍜媔鍚姩鏃惰瑙ｉ噴鍦ㄦ湰鍦扮┖闂翠腑
    MovementComp->bInitialVelocityInLocalSpace = true;   //杩欎釜鎶曞皠浣撳皢鍦ㄦ瘡涓?甯т腑鏇存柊瀹冪殑鏃嬭浆浠ヤ繚鎸佸亸鑸?
}


void ALMagicProjectile::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor) {
        ULAttributeComponoent* AttributeComp = Cast<ULAttributeComponoent>(OtherActor->GetComponentByClass(ULAttributeComponoent::StaticClass()));
        if (AttributeComp) {
	  AttributeComp->ApplyHealthChange(-20.0f);

	  Destroy();
        }
    }
}
