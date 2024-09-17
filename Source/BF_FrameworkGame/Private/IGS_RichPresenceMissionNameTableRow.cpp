#include "IGS_RichPresenceMissionNameTableRow.h"

FIGS_RichPresenceMissionNameTableRow::FIGS_RichPresenceMissionNameTableRow() {
    (*this).ID = FGameplayTag();
    (*this).Name = FText::GetEmpty();
}
