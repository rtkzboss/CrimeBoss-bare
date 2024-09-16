#include "META_HeisterRandomizedData.h"
#include "GameplayTagContainer.h"

FMETA_HeisterRandomizedData::FMETA_HeisterRandomizedData() {
    (*this).FinalCost = 0;
    (*this).FinalUpkeep = 0;
    (*this).MissionCut = 0;
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)) = {};
    (*this).Perks = {};
    (*this).Loadout.PrimaryWeapon = nullptr;
    auto gen3 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen3->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*gen3->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.Equipment = {};
    (*this).Loadout.Perks = {};
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*gen3->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkinID, 0)) = NAME_None;
}
