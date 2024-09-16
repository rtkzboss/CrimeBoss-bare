#include "CommonHeisterLoadout.h"

FCommonHeisterLoadout::FCommonHeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).SecondaryWeapon = nullptr;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Equipment = {};
    (*this).Perks = {};
    (*this).Ability1ChargesLeft = -1;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).CharacterSkinID, 0)) = NAME_None;
}
