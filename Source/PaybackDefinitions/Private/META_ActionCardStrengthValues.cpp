#include "META_ActionCardStrengthValues.h"

FMETA_ActionCardStrengthValues::FMETA_ActionCardStrengthValues() {
    (*this).bNeedOverrideTitle = false;
    (*this).NewTitle = FText::GetEmpty();
    (*this).Values = {};
}
