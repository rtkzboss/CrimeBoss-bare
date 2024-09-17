#include "IGS_AISwatSpecializationHolder.h"
#include "GameplayTagContainer.h"
#include "EIGS_WeaponVisibilityType.h"

FIGS_AISwatSpecializationHolder::FIGS_AISwatSpecializationHolder() {
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
    (*this).Default.Character.Pawns = {};
    (*this).Default.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Default.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Default.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Default.Loadout.WeaponProbability = {};
    (*this).Default.Loadout.NoThrowableChance = 0;
    (*this).Default.Loadout.ThrowablePool = {};
    (*this).Default.Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Default.Loadout.ShowNoThrowableBool = 0;
    (*this).Default.Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Default"));
    (*this).Sniper.SpecStats.HitChance = 8.000000119e-01f;
    (*this).Sniper.SpecStats.HiddenTimeInterval.Min = 3.000000000e+00f;
    (*this).Sniper.SpecStats.HiddenTimeInterval.Max = 5.000000000e+00f;
    (*this).Sniper.SpecStats.CompromisedRange = 5.000000000e+02f;
    (*this).Sniper.SpecStats.WeaponVisibilityType = EIGS_WeaponVisibilityType::VT_Laser;
    (*this).Sniper.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.HP.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.HP.bOverloadValue = false;
    (*this).Sniper.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.Shield.bOverloadValue = false;
    (*this).Sniper.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Sniper.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Sniper.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Sniper.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Sniper.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Sniper.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Sniper.Enabled = true;
    (*this).Sniper.Character.Controller = FSoftObjectPath();
    (*this).Sniper.Character.Pawns = {};
    (*this).Sniper.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Sniper.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Sniper.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Sniper.Loadout.WeaponProbability = {};
    (*this).Sniper.Loadout.NoThrowableChance = 0;
    (*this).Sniper.Loadout.ThrowablePool = {};
    (*this).Sniper.Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Sniper.Loadout.ShowNoThrowableBool = 0;
    (*this).Sniper.Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Sniper"));
    (*this).Shield.SpecStats.ShieldGlassHP = 3.000000000e+02f;
    (*this).Shield.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.HP.Value = 0.000000000e+00f;
    (*this).Shield.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.HP.bOverloadValue = false;
    (*this).Shield.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Shield.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.Shield.bOverloadValue = false;
    (*this).Shield.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Shield.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Shield.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Shield.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Shield.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Shield.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Shield.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Shield.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Shield.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Shield.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Shield.Enabled = true;
    (*this).Shield.Character.Controller = FSoftObjectPath();
    (*this).Shield.Character.Pawns = {};
    (*this).Shield.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Shield.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Shield.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Shield.Loadout.WeaponProbability = {};
    (*this).Shield.Loadout.NoThrowableChance = 0;
    (*this).Shield.Loadout.ThrowablePool = {};
    (*this).Shield.Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Shield.Loadout.ShowNoThrowableBool = 0;
    (*this).Shield.Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Shield"));
    (*this).Heavy.SpecStats.Shock.ActivationDistance = 3.000000000e+02f;
    (*this).Heavy.SpecStats.Shock.Cooldown = 1.000000000e+01f;
    (*this).Heavy.SpecStats.Shock.Radius = 3.500000000e+02f;
    (*this).Heavy.SpecStats.Shock.Angle = 1.800000000e+02f;
    (*this).Heavy.SpecStats.Shock.ChargeTime = 2.000000000e+00f;
    (*this).Heavy.SpecStats.Shock.Damage = 1.000000000e+01f;
    (*this).Heavy.SpecStats.Shock.Count = 4;
    (*this).Heavy.SpecStats.Shock.Duration.Min = 3.750000000e+00f;
    (*this).Heavy.SpecStats.Shock.Duration.Max = 4.250000000e+00f;
    (*this).Heavy.SpecStats.WeakSpot.WeakSpotHealth = 1.000000000e+02f;
    (*this).Heavy.SpecStats.WeakSpot.DoomTimer.Min = 5.000000000e+00f;
    (*this).Heavy.SpecStats.WeakSpot.DoomTimer.Max = 1.000000000e+01f;
    (*this).Heavy.SpecStats.Injured.HealthToInjured = 2.500000000e+03f;
    (*this).Heavy.SpecStats.Injured.InjuredTime.Min = 6.000000000e+00f;
    (*this).Heavy.SpecStats.Injured.InjuredTime.Max = 7.500000000e+00f;
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
    (*this).Heavy.Character.Pawns = {};
    (*this).Heavy.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Heavy.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Heavy.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Heavy.Loadout.WeaponProbability = {};
    (*this).Heavy.Loadout.NoThrowableChance = 0;
    (*this).Heavy.Loadout.ThrowablePool = {};
    (*this).Heavy.Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Heavy.Loadout.ShowNoThrowableBool = 0;
    (*this).Heavy.Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Heavy"));
    (*this).HeavyScout.Stats.HP.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.HP.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.HP.bOverloadValue = false;
    (*this).HeavyScout.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.Shield.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.Shield.bOverloadValue = false;
    (*this).HeavyScout.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.WeaponDamage.bOverloadValue = false;
    (*this).HeavyScout.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.MeleeDamage.bOverloadValue = false;
    (*this).HeavyScout.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).HeavyScout.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.MovementSpeed.bOverloadValue = false;
    (*this).HeavyScout.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.CoverStickiness.bOverloadValue = false;
    (*this).HeavyScout.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).HeavyScout.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).HeavyScout.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).HeavyScout.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).HeavyScout.Enabled = true;
    (*this).HeavyScout.Character.Controller = FSoftObjectPath();
    (*this).HeavyScout.Character.Pawns = {};
    (*this).HeavyScout.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).HeavyScout.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).HeavyScout.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).HeavyScout.Loadout.WeaponProbability = {};
    (*this).HeavyScout.Loadout.NoThrowableChance = 0;
    (*this).HeavyScout.Loadout.ThrowablePool = {};
    (*this).HeavyScout.Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).HeavyScout.Loadout.ShowNoThrowableBool = 0;
    (*this).HeavyScout.Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Special.Scout.Heavy"));
}
