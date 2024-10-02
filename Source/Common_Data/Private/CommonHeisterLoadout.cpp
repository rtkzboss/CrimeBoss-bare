#include "CommonHeisterLoadout.h"
#include "Templates/SubclassOf.h"

FCommonHeisterLoadout::FCommonHeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponSkin = FGameplayTag();
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponSkin = FGameplayTag();
    (*this).MeleeWeapon = nullptr;
    (*this).MeleeWeaponSkin = FGameplayTag();
    (*this).Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
    (*this).Perks = TArray<FMETA_PerkDataToFPS>{};
    (*this).Ability1ChargesLeft = -1;
    (*this).CharacterSkinID = FGameplayTag();
}
