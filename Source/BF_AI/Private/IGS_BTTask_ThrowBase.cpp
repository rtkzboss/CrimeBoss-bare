#include "IGS_BTTask_ThrowBase.h"

UIGS_BTTask_ThrowBase::UIGS_BTTask_ThrowBase() {
    (*this).BeingShotInterrupts = true;
    (*this).ThrowNotifyTag = FGameplayTag::RequestGameplayTag(TEXT("Anim.Combat.Throw.Frag.Throw"));
    (*this).EventFilter = FGameplayTag::RequestGameplayTag(TEXT("Anim.Combat.Throw.Frag")).GetSingleTagContainer();
    (*this).NodeName = TEXT("DON'T USE BASE!");
}

