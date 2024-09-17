#include "META_HeisterLoadout.h"

FMETA_HeisterLoadout::FMETA_HeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponClass = nullptr;
    (*this).PrimaryPersonalWeapons = {};
    (*this).PrimaryWeaponSkin = FGameplayTag();
    (*this).PrimaryPersonalWeaponsClass = {};
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponClass = nullptr;
    (*this).SecondaryPersonalWeapons = {};
    (*this).SecondaryWeaponSkin = FGameplayTag();
    (*this).SecondaryPersonalWeaponsClass = {};
    (*this).SelectedEquipment = nullptr;
    (*this).ChainEquipments = {};
    (*this).ChainEquipmentsObjects = {};
    (*this).CharacterSkin = FGameplayTag();
    (*this).Ability1ChargesLeft = -1;
}
