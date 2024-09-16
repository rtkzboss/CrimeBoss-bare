#include "IGS_JobsScreenCategoryItem.h"

FIGS_JobsScreenCategoryItem::FIGS_JobsScreenCategoryItem() {
    (*this).ButtonImage = FSoftObjectPath();
    (*this).ButtonName = FText::GetEmpty();
    (*this).ButtonDescription = FText::GetEmpty();
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)) = {};
}
