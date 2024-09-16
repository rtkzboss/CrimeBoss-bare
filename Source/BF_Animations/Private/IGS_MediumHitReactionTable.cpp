#include "IGS_MediumHitReactionTable.h"

FIGS_MediumHitReactionTable::FIGS_MediumHitReactionTable() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.HitReaction.Unknown");
    (*this).AnimVariations = {};
}
