#include "META_ActionCardTableRow.h"
#include "EMETA_ActionCardTheme.h"

FMETA_ActionCardTableRow::FMETA_ActionCardTableRow() {
    (*this).ID = FSoftObjectPath();
    (*this).Data.Title = FText::GetEmpty();
    (*this).Data.Description = FText::GetEmpty();
    (*this).Data.Theme = EMETA_ActionCardTheme::Favour;
    (*this).Data.bImmediately = false;
    (*this).Data.bActionCardWithDuration = false;
    (*this).Data.IndexOfDurationValue = 0;
    (*this).Data.Strength = {};
}
