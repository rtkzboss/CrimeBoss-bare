#include "CommonHeisterLoadout.h"

FCommonHeisterLoadout::FCommonHeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponSkin = FGameplayTag();
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponSkin = FGameplayTag();
    (*this).Equipment = {};
    (*this).Perks = {};
    (*this).Ability1ChargesLeft = -1;
    (*this).CharacterSkinID = FGameplayTag();
}
