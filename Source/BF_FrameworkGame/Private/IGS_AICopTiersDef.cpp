#include "IGS_AICopTiersDef.h"
#include "GameplayTagContainer.h"

FIGS_AICopTiersDef::FIGS_AICopTiersDef() {
    (*this).Tier1.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.HP.bOverloadValue = false;
    (*this).Tier1.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.Shield.bOverloadValue = false;
    (*this).Tier1.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier1.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier1.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier1.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier1.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier1.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier1.Default.Enabled = true;
    (*this).Tier1.Default.Character.Controller = FSoftObjectPath();
    (*this).Tier1.Default.Character.Pawns = {};
    (*this).Tier1.Default.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Tier1.Default.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Tier1.Default.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Tier1.Default.Loadout.WeaponProbability = {};
    (*this).Tier1.Default.Loadout.NoThrowableChance = 0;
    (*this).Tier1.Default.Loadout.ThrowablePool = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier1.Default.Loadout.ShowNoThrowableBool = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Tier2.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.HP.bOverloadValue = false;
    (*this).Tier2.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.Shield.bOverloadValue = false;
    (*this).Tier2.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier2.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier2.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier2.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier2.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier2.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier2.Default.Enabled = true;
    (*this).Tier2.Default.Character.Controller = FSoftObjectPath();
    (*this).Tier2.Default.Character.Pawns = {};
    (*this).Tier2.Default.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Tier2.Default.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Tier2.Default.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Tier2.Default.Loadout.WeaponProbability = {};
    (*this).Tier2.Default.Loadout.NoThrowableChance = 0;
    (*this).Tier2.Default.Loadout.ThrowablePool = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier2.Default.Loadout.ShowNoThrowableBool = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Tier3.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.HP.bOverloadValue = false;
    (*this).Tier3.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.Shield.bOverloadValue = false;
    (*this).Tier3.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier3.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier3.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier3.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier3.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier3.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier3.Default.Enabled = true;
    (*this).Tier3.Default.Character.Controller = FSoftObjectPath();
    (*this).Tier3.Default.Character.Pawns = {};
    (*this).Tier3.Default.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Tier3.Default.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Tier3.Default.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Tier3.Default.Loadout.WeaponProbability = {};
    (*this).Tier3.Default.Loadout.NoThrowableChance = 0;
    (*this).Tier3.Default.Loadout.ThrowablePool = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier3.Default.Loadout.ShowNoThrowableBool = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Special.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.HP.bOverloadValue = false;
    (*this).Special.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.Shield.bOverloadValue = false;
    (*this).Special.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Special.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Special.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Special.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Special.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Special.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Special.Default.Enabled = true;
    (*this).Special.Default.Character.Controller = FSoftObjectPath();
    (*this).Special.Default.Character.Pawns = {};
    (*this).Special.Default.Loadout.WeaponPool.PrimaryWeapons = {};
    (*this).Special.Default.Loadout.WeaponPool.SecondaryWeapons = {};
    (*this).Special.Default.Loadout.WeaponPool.MeleeWeapons = {};
    (*this).Special.Default.Loadout.WeaponProbability = {};
    (*this).Special.Default.Loadout.NoThrowableChance = 0;
    (*this).Special.Default.Loadout.ThrowablePool = {};
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Special.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Special.Default.Loadout.ShowNoThrowableBool = 0;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Special.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
}
