#include "IGS_ChallengeTableRow.h"

FIGS_ChallengeTableRow::FIGS_ChallengeTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).RequiredValue = 1;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredCompletedChallenges, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredCompletedChallenges, 0)) = {};
}
