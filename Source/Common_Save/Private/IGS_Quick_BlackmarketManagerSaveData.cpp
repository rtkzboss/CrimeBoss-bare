#include "IGS_Quick_BlackmarketManagerSaveData.h"

FIGS_Quick_BlackmarketManagerSaveData::FIGS_Quick_BlackmarketManagerSaveData() {
    (*this).bInited = false;
    (*this).Heisters = {};
    (*this).Weapons = {};
    (*this).WeaponSkins = {};
    (*this).Equipment = {};
    (*this).Perks = {};
    (*this).BossCharacterSkins = {};
    (*this).UnseenUnlockedCharacterTagIDs = {};
    (*this).UnseenUnlockedWeaponTagIDs = {};
    (*this).UnseenUnlockedEquipmentTagIDs = {};
}
