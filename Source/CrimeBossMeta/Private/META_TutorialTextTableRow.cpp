#include "META_TutorialTextTableRow.h"

FMETA_TutorialTextTableRow::FMETA_TutorialTextTableRow() {
    (*this).ID = FGameplayTag();
    (*this).Text = FText::GetEmpty();
}
