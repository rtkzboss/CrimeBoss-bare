#include "IGS_AIBaseUnitDef.h"
#include "GameplayTagContainer.h"
#include "EIGS_CoverPreset.h"

FIGS_AIBaseUnitDef::FIGS_AIBaseUnitDef() {
    (*this).Stats.HP = 2.800000000e+02f;
    (*this).Stats.Shield = 0.000000000e+00f;
    (*this).Stats.WeaponDamage = 1.000000000e+00f;
    (*this).Stats.MeleeDamage = 1.000000000e+00f;
    (*this).Stats.WeaponDispersion = 1.000000000e+00f;
    (*this).Stats.MovementSpeed = 1.000000000e+00f;
    (*this).Stats.CoverPreset = EIGS_CoverPreset::AICS_None;
    (*this).Stats.CoverStickiness = 5.000000000e-01f;
    (*this).Stats.ReactionIntensity = 5.000000000e-01f;
    (*this).Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Loadout.WeaponProbability = {};
    (*this).Loadout.NoThrowableChance = 0;
    (*this).Loadout.ThrowablePool = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Loadout.ShowNoThrowableBool = 0;
}
