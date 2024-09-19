#include "IGS_AIBaseUnitDef.h"
#include "GameplayTagContainer.h"
#include "EIGS_CoverPreset.h"
#include "IGS_AILoadoutData.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "Templates/SubclassOf.h"

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
    (*this).Loadout.WeaponPool.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Loadout.WeaponPool.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Loadout.WeaponPool.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Loadout.WeaponProbability = TArray<FIGS_AILoadoutData>{};
    (*this).Loadout.NoThrowableChance = 0;
    (*this).Loadout.ThrowablePool = TArray<FIGS_AIThrowableWeaponDef>{};
    (*this).Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Loadout.ShowNoThrowableBool = 0;
}
