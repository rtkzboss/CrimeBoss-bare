#include "IGS_AIBackupSpecializationHolder.h"
#include "GameplayTagContainer.h"
#include "IGS_AILoadoutData.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "Templates/SubclassOf.h"

class AIGS_GameCharacterFramework;

FIGS_AIBackupSpecializationHolder::FIGS_AIBackupSpecializationHolder() {
    (*this).Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.HP.bOverloadValue = false;
    (*this).Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.Shield.bOverloadValue = false;
    (*this).Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Default.Enabled = true;
    (*this).Default.Character.Controller = FSoftObjectPath();
    (*this).Default.Character.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Default.Loadout.WeaponPool.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Default.Loadout.WeaponPool.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Default.Loadout.WeaponPool.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Default.Loadout.WeaponProbability = TArray<FIGS_AILoadoutData>{};
    (*this).Default.Loadout.NoThrowableChance = 0;
    (*this).Default.Loadout.ThrowablePool = TArray<FIGS_AIThrowableWeaponDef>{};
    (*this).Default.Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Default.Loadout.ShowNoThrowableBool = 0;
    (*this).Default.Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Default"));
    (*this).Heavy.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.HP.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.HP.bOverloadValue = false;
    (*this).Heavy.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.Shield.bOverloadValue = false;
    (*this).Heavy.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Heavy.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Heavy.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Heavy.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Heavy.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Heavy.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Heavy.Enabled = true;
    (*this).Heavy.Character.Controller = FSoftObjectPath();
    (*this).Heavy.Character.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Heavy.Loadout.WeaponPool.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Heavy.Loadout.WeaponPool.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Heavy.Loadout.WeaponPool.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Heavy.Loadout.WeaponProbability = TArray<FIGS_AILoadoutData>{};
    (*this).Heavy.Loadout.NoThrowableChance = 0;
    (*this).Heavy.Loadout.ThrowablePool = TArray<FIGS_AIThrowableWeaponDef>{};
    (*this).Heavy.Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Heavy.Loadout.ShowNoThrowableBool = 0;
    (*this).Heavy.Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Heavy"));
}
