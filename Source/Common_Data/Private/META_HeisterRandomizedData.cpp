#include "META_HeisterRandomizedData.h"
#include "GameplayTagContainer.h"

FMETA_HeisterRandomizedData::FMETA_HeisterRandomizedData() {
    (*this).FinalCost = 0;
    (*this).FinalUpkeep = 0;
    (*this).MissionCut = 0;
    (*this).Traits = FGameplayTagContainer();
    (*this).Perks = {};
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).Loadout.Equipment = {};
    (*this).Loadout.Perks = {};
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*this).Loadout.CharacterSkinID = FGameplayTag();
}
