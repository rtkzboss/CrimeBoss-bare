#include "IGS_LaserBase.h"
#include "Components/SceneComponent.h"

AIGS_LaserBase::AIGS_LaserBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    (*this).DestroyingReportsToHQ = true;
    (*this).DestroyingIsSuspicious = true;
    (*this).DisablingIsSuspicious = true;
    (*this).RootComponent = gen;
}



void AIGS_LaserBase::OnLaserDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void AIGS_LaserBase::DisableLaser(AIGS_GameCharacterFramework* inInstigator) {
}

