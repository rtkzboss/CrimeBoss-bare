#include "IGS_SuspicionDataBase.h"

FIGS_SuspicionDataBase::FIGS_SuspicionDataBase() {
    (*this).OffenceTag = FGameplayTag();
    (*this).OffenceType = EIGS_OffenceType::Offence_UNKNOWN;
    (*this).OffenceNoticedBy = 0;
    (*this).Strikes = 3;
    (*this).IsHeavy = false;
    (*this).AmbientReaction = EIGS_AmbientReaction::None;
    (*this).AmbientReactionScope = 0;
    (*this).AmbientDialogueOverrideIDs = TArray<FText>{FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).BlameText = FText::GetEmpty();
    (*this).RadioReactionDialogueOverrideID = FText::GetEmpty();
    (*this).ReactionDialogueIDs = TArray<FText>{FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).ReactionType = EIGS_ReactionTypeTags::RT_UNKNOWN;
    (*this).bHasMaxDistance = false;
    (*this).MaxDetectionDistance = -1.000000000e+00f;
}
