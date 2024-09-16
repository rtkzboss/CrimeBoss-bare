#include "IGS_GlobalItemsData.h"
#include "EIGS_ItemType.h"

FIGS_GlobalItemsData::FIGS_GlobalItemsData() {
    (*this).HUDIcon = FSoftObjectPath();
    (*this).HUDIconText = FText::GetEmpty();
    (*this).MaxCount = -1;
    (*this).ItemType = EIGS_ItemType::Item_Global;
}
