#include "IGS_GeneralReactionData_Base.h"

UIGS_GeneralReactionData_Base::UIGS_GeneralReactionData_Base() {
    (*this).Tag = FGameplayTag::RequestGameplayTag(TEXT("RestrictedAITags.GeneralReaction.Unknown"));
}

