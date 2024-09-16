#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "EJobUITileType.h"

FIGS_MultiplayerJobCategoryItemRow::FIGS_MultiplayerJobCategoryItemRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).MissionScenarios, 0)) = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).UIData.Image = FSoftObjectPath();
    (*this).UIData.Name = FText::GetEmpty();
    (*this).UIData.Description = FText::GetEmpty();
    (*this).UIData.TileDisplayType = EJobUITileType::Big;
}
