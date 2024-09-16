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
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Loadout.ShowNoThrowableBool = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Default");
}
