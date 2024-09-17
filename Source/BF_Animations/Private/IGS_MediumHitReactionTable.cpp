#include "IGS_MediumHitReactionTable.h"

FIGS_MediumHitReactionTable::FIGS_MediumHitReactionTable() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.HitReaction.Unknown"));
    (*this).AnimVariations = {};
}
