#include "IGS_PlantableExplosiveProjectile.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_PlantableExplosiveProjectile::AIGS_PlantableExplosiveProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USphereComponent>(TEXT("ShootCollisionSphere"));
    (*this).PushIntoMeshDistance = 3.000000000e+00f;
    (*this).RotateMeshOnPlant.Pitch = -9.000000000e+01f;
    (*this).ShootCollisionSphere = gen;
    auto gen2 = Cast<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CapsuleCollisionComponent")));
    if (gen) gen->SetupAttachment(gen2);
}


void AIGS_PlantableExplosiveProjectile::OnRep_PlantData() {
}

void AIGS_PlantableExplosiveProjectile::OnPhysicsSettingsChanged(UPrimitiveComponent* inChangedComponent) {
}

void AIGS_PlantableExplosiveProjectile::Detonate() {
}

bool AIGS_PlantableExplosiveProjectile::CanStick_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult) {
    return false;
}

void AIGS_PlantableExplosiveProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_PlantableExplosiveProjectile, mR_PlantData);
}

