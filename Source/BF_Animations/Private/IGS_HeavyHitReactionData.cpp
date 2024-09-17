#include "IGS_HeavyHitReactionData.h"

FIGS_HeavyHitReactionData::FIGS_HeavyHitReactionData() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Unknown"));
    (*this).AnimVariations = {};
}
