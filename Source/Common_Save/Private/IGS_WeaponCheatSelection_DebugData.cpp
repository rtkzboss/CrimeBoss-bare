#include "IGS_WeaponCheatSelection_DebugData.h"

FIGS_WeaponCheatSelection_DebugData::FIGS_WeaponCheatSelection_DebugData() {
    (*this).WeaponToAdd = nullptr;
    (*this).WeaponClass = nullptr;
    (*this).SelectedIndices = {};
    (*this).WeaponPreviewText = FText::GetEmpty();
}
