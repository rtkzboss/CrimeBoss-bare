#include "IGS_GeneralReactionData_Base.h"

UIGS_GeneralReactionData_Base::UIGS_GeneralReactionData_Base() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = TEXT("RestrictedAITags.GeneralReaction.Unknown");
}

