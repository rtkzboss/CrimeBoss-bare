#include "IGS_JobCategoryItemUIData.h"

FIGS_JobCategoryItemUIData::FIGS_JobCategoryItemUIData() {
    (*this).Image = FSoftObjectPath();
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).TileDisplayType = EJobUITileType::Big;
}
