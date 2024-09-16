#include "META_HeisterLoadout.h"

FMETA_HeisterLoadout::FMETA_HeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponClass = nullptr;
    (*this).PrimaryPersonalWeapons = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).PrimaryPersonalWeaponsClass = {};
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponClass = nullptr;
    (*this).SecondaryPersonalWeapons = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).SecondaryPersonalWeaponsClass = {};
    (*this).SelectedEquipment = nullptr;
    (*this).ChainEquipments = {};
    (*this).ChainEquipmentsObjects = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CharacterSkin, 0)) = NAME_None;
    (*this).Ability1ChargesLeft = -1;
}
