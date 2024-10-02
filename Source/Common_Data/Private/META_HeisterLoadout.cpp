#include "META_HeisterLoadout.h"
#include "Templates/SubclassOf.h"

FMETA_HeisterLoadout::FMETA_HeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponClass = nullptr;
    (*this).PrimaryPersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).PrimaryWeaponSkin = FGameplayTag();
    (*this).PrimaryPersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponClass = nullptr;
    (*this).SecondaryPersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).SecondaryWeaponSkin = FGameplayTag();
    (*this).SecondaryPersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).MeleeWeapon = nullptr;
    (*this).MeleeWeaponClass = nullptr;
    (*this).MeleePersonalWeapons = TArray<UMETA_Weapon*>{};
    (*this).MeleeWeaponSkin = FGameplayTag();
    (*this).MeleePersonalWeaponsClass = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).SelectedEquipment = nullptr;
    (*this).ChainEquipments = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).ChainEquipmentsObjects = TArray<UMETA_Equipment*>{};
    (*this).CharacterSkin = FGameplayTag();
    (*this).Ability1ChargesLeft = -1;
}
