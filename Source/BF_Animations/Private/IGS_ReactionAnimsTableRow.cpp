#include "IGS_ReactionAnimsTableRow.h"

FIGS_ReactionAnimsTableRow::FIGS_ReactionAnimsTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Reaction.Unknown"));
    (*this).AnimVariations = {};
}
