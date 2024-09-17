#include "IGS_AIBaseTierDef.h"

FIGS_AIBaseTierDef::FIGS_AIBaseTierDef() {
    (*this).Enabled = true;
    (*this).Character.Controller = FSoftObjectPath();
    (*this).Character.Pawns = {};
    (*this).Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Loadout.WeaponProbability = {};
    (*this).Loadout.NoThrowableChance = 0;
    (*this).Loadout.ThrowablePool = {};
    (*this).Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Loadout.ShowNoThrowableBool = 0;
    (*this).Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Default"));
}
