#include "META_ObjectivePresetTableRow.h"

FMETA_ObjectivePresetTableRow::FMETA_ObjectivePresetTableRow() {
    (*this).ID = FGameplayTag();
    (*this).Objectives = FGameplayTagContainer();
}
