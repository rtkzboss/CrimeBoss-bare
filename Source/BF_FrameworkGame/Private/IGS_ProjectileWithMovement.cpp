#include "IGS_ProjectileWithMovement.h"
#include "GameFramework/ProjectileMovementComponent.h"

AIGS_ProjectileWithMovement::AIGS_ProjectileWithMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    (*this).ProjectileMovement = gen;
    (*this).ProjectileSpeed = 1.500000000e+03f;
    (*this).PrimaryActorTick.bCanEverTick = true;
}

void AIGS_ProjectileWithMovement::OnProjectileStop(const FHitResult& ImpactResult) {
}

void AIGS_ProjectileWithMovement::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AIGS_ProjectileWithMovement::OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult) {
}

void AIGS_ProjectileWithMovement::OnComponentBeginOverlap(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inIsFromSweep, const FHitResult& inSweepResult) {
}

