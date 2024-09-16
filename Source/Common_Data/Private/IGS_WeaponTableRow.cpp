#include "IGS_WeaponTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_MeleeAttackType.h"
#include "EIGS_WeaponAttackType.h"
#include "EIGS_WieldableClass.h"

FIGS_WeaponTableRow::FIGS_WeaponTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = nullptr;
    (*this).ClassDataOverride = nullptr;
    (*this).Attack.ProjectileClass = nullptr;
    (*this).Attack.BaseDamage = 1.000000000e+02f;
    (*this).Attack.EffectiveRange = 3.000000000e+04f;
    (*this).Attack.MaxRange = 5.000000000e+04f;
    (*this).Attack.MinDamageMultiplier = 5.000000000e-01f;
    (*this).Attack.RoundsPerMinute = 6.000000000e+02f;
    (*this).Attack.SemiAutoDelay = 1.000000015e-01f;
    (*this).Attack.BurstDelay = 2.000000030e-01f;
    (*this).Attack.ProjectilesPerShot = 1;
    (*this).Attack.ShooterTypes = 0;
    (*this).Accuracy.HipFireSpread.X = 2.000000030e-01f;
    (*this).Accuracy.HipFireSpread.Y = 4.000000000e+00f;
    (*this).Accuracy.ADSSpread.X = 0.000000000e+00f;
    (*this).Accuracy.ADSSpread.Y = 2.000000000e+00f;
    (*this).Accuracy.SpreadFallTime = 2.500000000e-01f;
    (*this).Accuracy.SpreadPerShot = 5.000000000e-01f;
    (*this).Accuracy.ADSIdleSway = 1.000000000e+00f;
    (*this).Accuracy.Multipliers.CrouchMult = 8.000000119e-01f;
    (*this).Accuracy.Multipliers.MovementMult = 1.200000048e+00f;
    (*this).Accuracy.Multipliers.JumpMult = 1.500000000e+00f;
    (*this).Recoil.Vertical.X = 3.000000119e-01f;
    (*this).Recoil.Vertical.Y = 5.000000000e-01f;
    (*this).Recoil.Horizontal.X = -1.000000015e-01f;
    (*this).Recoil.Horizontal.Y = 1.000000015e-01f;
    (*this).Recoil.RecoilPitchReturnRatio = 1.000000000e+00f;
    (*this).Recoil.VerticalRecoilDecay = 5.000000000e-01f;
    (*this).Ammo.AmmoObject = nullptr;
    (*this).Ammo.MagazineCapacity = 30;
    (*this).Ammo.ReserveCapacity = 300;
    (*this).Ammo.AmmoCostPerShot = 1;
    (*this).Bash.AttackType = EIGS_MeleeAttackType::MAT_Bash;
    (*this).Bash.DamageType = nullptr;
    (*this).Bash.ImpactType = nullptr;
    (*this).Bash.BaseDamage = 5.000000000e+01f;
    (*this).Bash.MaxRange = 1.000000000e+02f;
    (*this).Bash.TraceRadius = 3.000000000e+01f;
    (*this).Animations.NoCombatEmptyReloadTime = 1.000000000e+00f;
    (*this).Animations.EmptyReloadTime = 1.000000000e+00f;
    (*this).Animations.NoCombatReloadTime = 1.000000000e+00f;
    (*this).Animations.ReloadTime = 1.000000000e+00f;
    (*this).Animations.ADSInSpeedMult = 1.000000000e+00f;
    (*this).Animations.ADSOutSpeedMult = 1.000000000e+00f;
    (*this).Animations.ScopeInPercent = 8.000000119e-01f;
    (*this).Animations.ADSMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Offences.ShotLoudness = 1.000000000e+00f;
    (*this).Offences.ImpactLoudness = 3.000000119e-01f;
    (*this).Offences.FireOffenceDelay = 2.000000000e+00f;
    (*this).AdaptiveTriggers.FeedbackMode.OverrideEnabled = false;
    (*this).AdaptiveTriggers.FeedbackMode.Position = 0;
    (*this).AdaptiveTriggers.FeedbackMode.Strength = 0;
    (*this).AdaptiveTriggers.WeaponMode.OverrideEnabled = false;
    (*this).AdaptiveTriggers.WeaponMode.StartPosition = 2;
    (*this).AdaptiveTriggers.WeaponMode.EndPosition = 2;
    (*this).AdaptiveTriggers.WeaponMode.Strength = 0;
    (*this).AdaptiveTriggers.VibrationMode.OverrideEnabled = false;
    (*this).AdaptiveTriggers.VibrationMode.Position = 0;
    (*this).AdaptiveTriggers.VibrationMode.Frequency = 0;
    (*this).AdaptiveTriggers.VibrationMode.Amplitude = 0;
    (*this).WieldableData.WieldableClass = FSoftObjectPath();
    (*this).WieldableData.WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).WieldableData.WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).WieldableData.HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).WieldableData.WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).WieldableData.Class = EIGS_WieldableClass::C_Generic;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WieldableData.ClassTag, 0)) = TEXT("Item.Wieldable");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WieldableData.WieldingOffence, 0)) = TEXT("Offence.Player.Wielding.Weapon");
    (*this).WieldableData.DefaultSkin = FSoftObjectPath();
    (*this).WieldableData.ItemType = EIGS_ItemType::Item_Weapon;
    (*this).WieldableData.Name = FText::FromString(TEXT("None"));
    (*this).WieldableData.bShouldMove = true;
    (*this).WieldableData.Image = FSoftObjectPath();
    (*this).WieldableData.PickupMesh = FSoftObjectPath();
    (*this).WieldableData.PickupMeshSkeletal = FSoftObjectPath();
    (*this).WieldableData.ItemPickUpAudioEvent = FSoftObjectPath();
    (*this).WieldableData.ItemThrowAudioEvent = FSoftObjectPath();
    (*this).WieldableData.HitImpactID = nullptr;
    (*this).WieldableData.HitImpactMass = 1.000000000e+00f;
    (*this).WieldableData.Quality = EMETA_ItemQuality::MinGenerate;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WieldableData.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Weapon");
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WieldableData.GrantedTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WieldableData.GrantedTags, 0)) = {};
    (*this).WieldableData.GrantedAbilities = {};
    (*this).WieldableData.AppliedEffects = {};
    (*this).WieldableData.ItemPropertyFlags = 1;
    (*this).WieldableData.MonetaryValue = 0;
    (*this).WieldableData.ModelScaleFPV = 1.000000000e+00f;
    (*this).WieldableData.ModelScale3PV = 1.000000000e+00f;
    (*this).WieldableData.AdditionalPreloadClasses = {};
    (*this).WieldableData.AdditionalPreloadObjects = {};
    (*this).DefaultModData.DefaultMagazineMesh = FSoftObjectPath();
    (*this).DefaultModData.DefaultStockMesh = FSoftObjectPath();
    (*this).DefaultModData.DefaultSightMesh = FSoftObjectPath();
    (*this).DefaultModData.DefaultDynamicSightMesh = FSoftObjectPath();
    (*this).DefaultModData.DefaultBarrelMesh = FSoftObjectPath();
    (*this).DefaultModData.DefaultVisibilityMesh = FSoftObjectPath();
    (*this).DefaultModData.DefaultZoomMagnification = 1.500000000e+00f;
    (*this).AIData.HeisterDamage = 1.000000000e+02f;
    (*this).AIData.EnemyDamage = 5.000000000e+01f;
    (*this).AIData.BaseSpread = 2.000000000e+00f;
    (*this).AIData.EffectiveRange = 3.000000000e+04f;
    (*this).AIData.MaxRange = 5.000000000e+04f;
    (*this).AIData.LineTraceEndRange = 2.000000000e+04f;
    (*this).AIData.MinDamageMultiplier = 5.000000000e-01f;
    (*this).AIData.ReloadTime = 1.000000000e+00f;
    (*this).AIData.ProjectilesPerShot = 1;
    (*this).AIData.bOverridePrimaryShooter = false;
    (*this).AIData.PrimaryShooterOverride = EIGS_WeaponAttackType::AT_SemiAuto;
    (*this).AIData.AIBash.AttackType = EIGS_MeleeAttackType::MAT_Bash;
    (*this).AIData.AIBash.DamageType = nullptr;
    (*this).AIData.AIBash.ImpactType = nullptr;
    (*this).AIData.AIBash.BaseDamage = 5.000000000e+01f;
    (*this).AIData.AIBash.MaxRange = 1.000000000e+02f;
    (*this).AIData.AIBash.TraceRadius = 3.000000000e+01f;
    (*this).ExtraFireModeData.Attack.ProjectileClass = nullptr;
    (*this).ExtraFireModeData.Attack.BaseDamage = 1.000000000e+02f;
    (*this).ExtraFireModeData.Attack.EffectiveRange = 3.000000000e+04f;
    (*this).ExtraFireModeData.Attack.MaxRange = 5.000000000e+04f;
    (*this).ExtraFireModeData.Attack.MinDamageMultiplier = 5.000000000e-01f;
    (*this).ExtraFireModeData.Attack.RoundsPerMinute = 6.000000000e+02f;
    (*this).ExtraFireModeData.Attack.SemiAutoDelay = 1.000000015e-01f;
    (*this).ExtraFireModeData.Attack.BurstDelay = 2.000000030e-01f;
    (*this).ExtraFireModeData.Attack.ProjectilesPerShot = 1;
    (*this).ExtraFireModeData.Attack.ShooterTypes = 0;
    (*this).ExtraFireModeData.Accuracy.HipFireSpread.X = 2.000000030e-01f;
    (*this).ExtraFireModeData.Accuracy.HipFireSpread.Y = 4.000000000e+00f;
    (*this).ExtraFireModeData.Accuracy.ADSSpread.X = 0.000000000e+00f;
    (*this).ExtraFireModeData.Accuracy.ADSSpread.Y = 2.000000000e+00f;
    (*this).ExtraFireModeData.Accuracy.SpreadFallTime = 2.500000000e-01f;
    (*this).ExtraFireModeData.Accuracy.SpreadPerShot = 5.000000000e-01f;
    (*this).ExtraFireModeData.Accuracy.ADSIdleSway = 1.000000000e+00f;
    (*this).ExtraFireModeData.Accuracy.Multipliers.CrouchMult = 8.000000119e-01f;
    (*this).ExtraFireModeData.Accuracy.Multipliers.MovementMult = 1.200000048e+00f;
    (*this).ExtraFireModeData.Accuracy.Multipliers.JumpMult = 1.500000000e+00f;
    (*this).ExtraFireModeData.Recoil.Vertical.X = 3.000000119e-01f;
    (*this).ExtraFireModeData.Recoil.Vertical.Y = 5.000000000e-01f;
    (*this).ExtraFireModeData.Recoil.Horizontal.X = -1.000000015e-01f;
    (*this).ExtraFireModeData.Recoil.Horizontal.Y = 1.000000015e-01f;
    (*this).ExtraFireModeData.Recoil.RecoilPitchReturnRatio = 1.000000000e+00f;
    (*this).ExtraFireModeData.Recoil.VerticalRecoilDecay = 5.000000000e-01f;
    (*this).ExtraFireModeData.Ammo.AmmoObject = nullptr;
    (*this).ExtraFireModeData.Ammo.MagazineCapacity = 30;
    (*this).ExtraFireModeData.Ammo.ReserveCapacity = 300;
    (*this).ExtraFireModeData.Ammo.AmmoCostPerShot = 1;
    (*this).ExtraFireModeData.Animations.NoCombatEmptyReloadTime = 1.000000000e+00f;
    (*this).ExtraFireModeData.Animations.EmptyReloadTime = 1.000000000e+00f;
    (*this).ExtraFireModeData.Animations.NoCombatReloadTime = 1.000000000e+00f;
    (*this).ExtraFireModeData.Animations.ReloadTime = 1.000000000e+00f;
    (*this).ExtraFireModeData.Animations.ADSInSpeedMult = 1.000000000e+00f;
    (*this).ExtraFireModeData.Animations.ADSOutSpeedMult = 1.000000000e+00f;
    (*this).ExtraFireModeData.Animations.ScopeInPercent = 8.000000119e-01f;
    (*this).ExtraFireModeData.Animations.ADSMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).ExtraFireModeData.Offences.ShotLoudness = 1.000000000e+00f;
    (*this).ExtraFireModeData.Offences.ImpactLoudness = 3.000000119e-01f;
    (*this).ExtraFireModeData.Offences.FireOffenceDelay = 2.000000000e+00f;
    (*this).ExtraFireModeData.AdaptiveTriggers.FeedbackMode.OverrideEnabled = false;
    (*this).ExtraFireModeData.AdaptiveTriggers.FeedbackMode.Position = 0;
    (*this).ExtraFireModeData.AdaptiveTriggers.FeedbackMode.Strength = 0;
    (*this).ExtraFireModeData.AdaptiveTriggers.WeaponMode.OverrideEnabled = false;
    (*this).ExtraFireModeData.AdaptiveTriggers.WeaponMode.StartPosition = 2;
    (*this).ExtraFireModeData.AdaptiveTriggers.WeaponMode.EndPosition = 2;
    (*this).ExtraFireModeData.AdaptiveTriggers.WeaponMode.Strength = 0;
    (*this).ExtraFireModeData.AdaptiveTriggers.VibrationMode.OverrideEnabled = false;
    (*this).ExtraFireModeData.AdaptiveTriggers.VibrationMode.Position = 0;
    (*this).ExtraFireModeData.AdaptiveTriggers.VibrationMode.Frequency = 0;
    (*this).ExtraFireModeData.AdaptiveTriggers.VibrationMode.Amplitude = 0;
    (*this).WeaponNameAkSwitch = FSoftObjectPath();
}
