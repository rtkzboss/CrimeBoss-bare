#include "IGS_TileItemWeaponData.h"

UIGS_TileItemWeaponData::UIGS_TileItemWeaponData() {
}

void UIGS_TileItemWeaponData::SetModsUIData(TArray<FIGS_WeaponModeUIData> inModsUIData) {
}

void UIGS_TileItemWeaponData::SetComparisonData(ETileComparisonUIData inComparisonUIData) {
}

TArray<FIGS_WeaponModeUIData> UIGS_TileItemWeaponData::GetModsUIData() const {
    return {};
}

ETileComparisonUIData UIGS_TileItemWeaponData::GetComparisonData() const {
    return ETileComparisonUIData::None;
}

