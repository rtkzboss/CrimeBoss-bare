#include "IGS_AISwatShieldTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AISwatShieldTierDef::FIGS_AISwatShieldTierDef() {
    (*this).SpecStats.ShieldGlassHP = 3.000000000e+02f;
    (*this).Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Shield"));
}
