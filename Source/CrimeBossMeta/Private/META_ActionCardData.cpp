#include "META_ActionCardData.h"

FMETA_ActionCardData::FMETA_ActionCardData() {
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Theme = EMETA_ActionCardTheme::Favour;
    (*this).bImmediately = false;
    (*this).bActionCardWithDuration = false;
    (*this).IndexOfDurationValue = 0;
    (*this).Strength = {};
}
