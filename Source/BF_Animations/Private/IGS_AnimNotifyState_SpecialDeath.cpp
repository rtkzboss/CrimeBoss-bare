#include "IGS_AnimNotifyState_SpecialDeath.h"

UIGS_AnimNotifyState_SpecialDeath::UIGS_AnimNotifyState_SpecialDeath() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Death.SpecialTypes.Unknown");
}

