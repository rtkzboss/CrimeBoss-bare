#include "IGS_CharacterPanelDataStruct.h"

FIGS_CharacterPanelDataStruct::FIGS_CharacterPanelDataStruct() {
    (*this).Health = 0;
    (*this).Revives = 0;
    (*this).MissionCut = 0;
    (*this).XP = 0.000000000e+00f;
    (*this).Level = 0;
    (*this).PerkTags = {};
    (*this).Perks = {};
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponClass = nullptr;
    (*this).Loadout.PrimaryPersonalWeapons = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.PrimaryPersonalWeaponsClass = {};
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponClass = nullptr;
    (*this).Loadout.SecondaryPersonalWeapons = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryPersonalWeaponsClass = {};
    (*this).Loadout.SelectedEquipment = nullptr;
    (*this).Loadout.ChainEquipments = {};
    (*this).Loadout.ChainEquipmentsObjects = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Loadout.Ability1ChargesLeft = -1;
}
