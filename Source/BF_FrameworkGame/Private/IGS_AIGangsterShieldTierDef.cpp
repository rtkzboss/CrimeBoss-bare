#include "IGS_AIGangsterShieldTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIGangsterShieldTierDef::FIGS_AIGangsterShieldTierDef() {
    (*this).Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Shield"));
}
