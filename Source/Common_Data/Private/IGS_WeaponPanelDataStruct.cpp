#include "IGS_WeaponPanelDataStruct.h"

FIGS_WeaponPanelDataStruct::FIGS_WeaponPanelDataStruct() {
    (*this).SkinName = FText::GetEmpty();
    (*this).Modes = {};
    (*this).Stats = {};
}
