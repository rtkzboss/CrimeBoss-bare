#include "IGS_WeaponPanelDataStruct.h"

FIGS_WeaponPanelDataStruct::FIGS_WeaponPanelDataStruct() {
    (*this).SkinName = FText::GetEmpty();
    (*this).Modes = TArray<FIGS_WeaponModeUIData>{};
    (*this).Stats = TArray<FIGS_WeaponStatUIData>{};
}
