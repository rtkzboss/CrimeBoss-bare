#include "IGS_MenuBackgroundTableRow.h"

FIGS_MenuBackgroundTableRow::FIGS_MenuBackgroundTableRow() {
    (*this).ID = FGameplayTag();
    (*this).Priority = 0;
    (*this).Name = FText::GetEmpty();
    (*this).Condition = nullptr;
}
