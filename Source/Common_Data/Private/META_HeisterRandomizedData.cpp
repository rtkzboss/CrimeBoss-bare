#include "META_HeisterRandomizedData.h"
#include "GameplayTagContainer.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_PerkDataToFPS.h"
#include "Templates/SubclassOf.h"

FMETA_HeisterRandomizedData::FMETA_HeisterRandomizedData() {
    (*this).FinalCost = 0;
    (*this).FinalUpkeep = 0;
    (*this).MissionCut = 0;
    (*this).Traits = FGameplayTagContainer();
    (*this).Perks = TArray<FMETA_PerkData>{};
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponSkin = FGameplayTag();
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponSkin = FGameplayTag();
    (*this).Loadout.Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).Loadout.Perks = TArray<FMETA_PerkDataToFPS>{};
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*this).Loadout.CharacterSkinID = FGameplayTag();
}
