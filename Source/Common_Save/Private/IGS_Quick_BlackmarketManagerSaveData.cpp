#include "IGS_Quick_BlackmarketManagerSaveData.h"

FIGS_Quick_BlackmarketManagerSaveData::FIGS_Quick_BlackmarketManagerSaveData() {
    (*this).bInited = false;
    (*this).Heisters = TArray<FMETA_HeisterSaveData>{};
    (*this).Weapons = TArray<FMETA_WeaponSaveData>{};
    (*this).WeaponSkins = TArray<FMETA_WeaponSkinSaveData>{};
    (*this).Equipment = TArray<FMETA_EquipmentSaveData>{};
    (*this).Perks = TArray<FMETA_PerkSaveData>{};
    (*this).BossCharacterSkins = TArray<FMETA_CharacterSkinSaveData>{};
    (*this).UnseenUnlockedCharacterTagIDs = TArray<FGameplayTag>{};
    (*this).UnseenUnlockedWeaponTagIDs = TArray<FGameplayTag>{};
    (*this).UnseenUnlockedEquipmentTagIDs = TArray<FGameplayTag>{};
}
