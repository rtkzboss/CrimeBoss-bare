#include "IGS_GeneralReactionTableRow.h"

FIGS_GeneralReactionTableRow::FIGS_GeneralReactionTableRow() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("RestrictedAITags.GeneralReaction.Unknown"));
    (*this).Data.bEnabled = false;
    (*this).Data.BehaviorTree = nullptr;
    (*this).Data.DataAsset = nullptr;
}
