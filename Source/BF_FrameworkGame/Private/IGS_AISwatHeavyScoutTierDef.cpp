#include "IGS_AISwatHeavyScoutTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AISwatHeavyScoutTierDef::FIGS_AISwatHeavyScoutTierDef() {
    (*this).Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Scout.Heavy"));
}
