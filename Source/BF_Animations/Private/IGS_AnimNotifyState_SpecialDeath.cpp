#include "IGS_AnimNotifyState_SpecialDeath.h"

UIGS_AnimNotifyState_SpecialDeath::UIGS_AnimNotifyState_SpecialDeath() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Death.SpecialTypes.Unknown"));
}

