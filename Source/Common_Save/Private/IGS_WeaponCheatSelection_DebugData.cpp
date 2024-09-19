#include "IGS_WeaponCheatSelection_DebugData.h"

FIGS_WeaponCheatSelection_DebugData::FIGS_WeaponCheatSelection_DebugData() {
    (*this).WeaponToAdd = nullptr;
    (*this).WeaponClass = nullptr;
    (*this).SelectedIndices = TArray<int32>{};
    (*this).WeaponPreviewText = FText::GetEmpty();
}
