#include "IGS_HeavyHitReactionData.h"

FIGS_HeavyHitReactionData::FIGS_HeavyHitReactionData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.HitReaction.Unknown");
    (*this).AnimVariations = {};
}
