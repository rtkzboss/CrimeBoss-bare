#include "IGS_ChallengeTableRow.h"

FIGS_ChallengeTableRow::FIGS_ChallengeTableRow() {
    (*this).ID = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).RequiredValue = 1;
    (*this).RequiredCompletedChallenges = FGameplayTagContainer();
}
