#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "EJobUITileType.h"

FIGS_MultiplayerJobCategoryItemRow::FIGS_MultiplayerJobCategoryItemRow() {
    (*this).ID = FGameplayTag();
    (*this).MissionScenarios = FGameplayTagContainer();
    (*this).EntitlementTag = FGameplayTag();
    (*this).UIData.Image = FSoftObjectPath();
    (*this).UIData.Name = FText::GetEmpty();
    (*this).UIData.Description = FText::GetEmpty();
    (*this).UIData.TileDisplayType = EJobUITileType::Big;
}
