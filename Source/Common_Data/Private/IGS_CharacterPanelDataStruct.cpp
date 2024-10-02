#include "IGS_CharacterPanelDataStruct.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"

class UMETA_Equipment;
class UMETA_Weapon;

FIGS_CharacterPanelDataStruct::FIGS_CharacterPanelDataStruct() {
    (*this).Health = 0;
    (*this).Revives = 0;
    (*this).MissionCut = 0;
    (*this).XP = 0.000000000e+00f;
    (*this).Level = 0;
    (*this).PerkTags = TArray<FGameplayTag>{};
    (*this).Perks = TArray<FMETA_PerkData>{};
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponClass = nullptr;
    (*this).Loadout.PrimaryPersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).Loadout.PrimaryPersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponClass = nullptr;
    (*this).Loadout.SecondaryPersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).Loadout.SecondaryPersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Loadout.MeleeWeapon = nullptr;
    (*this).Loadout.MeleeWeaponClass = nullptr;
    (*this).Loadout.MeleePersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).Loadout.MeleeWeaponSkin = FGameplayTag();
    (*this).Loadout.MeleePersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Loadout.SelectedEquipment = nullptr;
    (*this).Loadout.ChainEquipments = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).Loadout.ChainEquipmentsObjects = TArray<UMETA_Equipment*>{};
    (*this).Loadout.CharacterSkin = FGameplayTag();
    (*this).Loadout.Ability1ChargesLeft = -1;
}
