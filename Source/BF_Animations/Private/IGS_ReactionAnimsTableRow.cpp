#include "IGS_ReactionAnimsTableRow.h"

FIGS_ReactionAnimsTableRow::FIGS_ReactionAnimsTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Reaction.Unknown");
    (*this).AnimVariations = {};
}
