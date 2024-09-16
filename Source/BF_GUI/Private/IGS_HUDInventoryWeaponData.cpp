#include "IGS_HUDInventoryWeaponData.h"

FIGS_HUDInventoryWeaponData::FIGS_HUDInventoryWeaponData() {
    (*this).WieldableID = FSoftObjectPath();
    (*this).Slot = EIGS_WieldableSlot::S_UNKNOWN;
    (*this).WieldableIcon = FSoftObjectPath();
}
