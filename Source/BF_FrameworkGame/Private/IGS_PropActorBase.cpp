#include "IGS_PropActorBase.h"
#include "IGS_ObjectStatus.h"
#include "Engine/EngineTypes.h"

AIGS_PropActorBase::AIGS_PropActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("Object Status"));
    (*this).ObjectStatus = gen;
    (*this).DefaultNetUpdateFrequency = 5.000000000e+00f;
    (*this).bReplicates = true;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    (*this).NetDormancy = DORM_Initial;
    (*this).NetUpdateFrequency = 5.000000000e+00f;
}

void AIGS_PropActorBase::OnDeath_Implementation(float CurrentHealth, float CurrentShield, float HealthChange, float ShieldChange, const FIGS_HitInfo& HitInfo) {
}

void AIGS_PropActorBase::OnDamaged_Implementation(float CurrentHealth, float CurrentShield, float HealthChange, float ShieldChange, const FIGS_HitInfo& HitInfo) {
}

