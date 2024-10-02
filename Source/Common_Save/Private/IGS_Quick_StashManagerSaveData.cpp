#include "IGS_Quick_StashManagerSaveData.h"

FIGS_Quick_StashManagerSaveData::FIGS_Quick_StashManagerSaveData() {
    (*this).bInited = false;
    (*this).PrimaryWeapons = TArray<FMETA_WeaponSaveData>{};
    (*this).SecondaryWeapons = TArray<FMETA_WeaponSaveData>{};
    (*this).MeleeWeapons = TArray<FMETA_WeaponSaveData>{};
    (*this).WeaponSkins = TArray<FMETA_WeaponSkinSaveData>{};
    (*this).Equipment = TArray<FMETA_EquipmentSaveData>{};
    (*this).Perks = TArray<FMETA_PerkSaveData>{};
    (*this).BossCharacterSkins = TArray<FMETA_CharacterSkinSaveData>{};
}
