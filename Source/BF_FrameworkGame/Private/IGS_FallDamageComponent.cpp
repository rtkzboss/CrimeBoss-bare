#include "IGS_FallDamageComponent.h"
#include "Curves/CurveFloat.h"
#include "ComponentInstanceDataCache.h"
#include "IGS_DamageTypeFallDamage.h"

UIGS_FallDamageComponent::UIGS_FallDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bAddMaxStepHeightToFellHeight = true;
    (*this).InstaDeathDamage = 1.000001000e+06f;
    (*this).StartedFallingZ = 3.402823466e+38f;
    (*this).bFallDamagedEnabled = true;
    static ConstructorHelpers::FObjectFinder<UCurveFloat> gen0(TEXT("/Game/00_Main/Core/Tables/Curve_FallDamage_Float.Curve_FallDamage_Float"));
    (*this).FallDamageCurve = gen0.Object;
    static ConstructorHelpers::FClassFinder<UIGS_DamageTypeFallDamage> gen1(TEXT("/Game/00_Main/Core/DamageTypes/BP_DT_FallDamage.BP_DT_FallDamage_C"));
    (*this).FallDamageType = gen1.Class;
}

void UIGS_FallDamageComponent::SetFallDamageEnabled(bool inEnabled) {
}

bool UIGS_FallDamageComponent::IsNextFallDamageIgnored() const {
    return false;
}

bool UIGS_FallDamageComponent::IsFallDamageEnabled() const {
    return false;
}

void UIGS_FallDamageComponent::IgnoreNextFall() {
}


