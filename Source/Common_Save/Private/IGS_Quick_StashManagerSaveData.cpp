#include "IGS_Quick_StashManagerSaveData.h"

FIGS_Quick_StashManagerSaveData::FIGS_Quick_StashManagerSaveData() {
    (*this).bInited = false;
    (*this).PrimaryWeapons = {};
    (*this).SecondaryWeapons = {};
    (*this).WeaponSkins = {};
    (*this).Equipment = {};
    (*this).Perks = {};
    (*this).BossCharacterSkins = {};
}
