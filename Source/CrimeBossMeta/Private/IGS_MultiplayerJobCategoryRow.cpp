#include "IGS_MultiplayerJobCategoryRow.h"

FIGS_MultiplayerJobCategoryRow::FIGS_MultiplayerJobCategoryRow() {
    (*this).ID = FGameplayTag();
    (*this).Name = FText::GetEmpty();
    (*this).CategoryItemsDataTable = nullptr;
}
