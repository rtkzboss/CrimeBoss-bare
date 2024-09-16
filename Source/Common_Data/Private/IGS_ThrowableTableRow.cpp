#include "IGS_ThrowableTableRow.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_WieldableClass.h"

FIGS_ThrowableTableRow::FIGS_ThrowableTableRow() {
    (*this).ID = nullptr;
    (*this).Data.Projectile = FSoftObjectPath();
    (*this).Data.Equipment = FSoftObjectPath();
    (*this).Data.GrenadeData.OverlapsOnExplosion = true;
    (*this).Data.GrenadeData.bLineTraceOnOverlap = false;
    (*this).Data.GrenadeData.LineTraceZOffset = 1.000000000e+02f;
    (*this).Data.GrenadeData.InnerEffectRadius = 5.000000000e+02f;
    (*this).Data.GrenadeData.OuterEffectRadius = 5.000000000e+02f;
    (*this).Data.GrenadeData.EffectFalloff = 0.000000000e+00f;
    (*this).Data.GrenadeData.StartTimerImmediately = false;
    (*this).Data.GrenadeData.ExplosionTimer = 3.000000000e+00f;
    (*this).Data.GrenadeData.DestroyAfterExplosionTime = 3.000000000e+00f;
    (*this).Data.GrenadeData.CanBeCooked = false;
    (*this).Data.GrenadeData.bCanAffectThrower = false;
    (*this).Data.GrenadeData.bCanAffectFriendlies = false;
    (*this).Data.GrenadeData.bCanAffectRobots = true;
    (*this).Data.GrenadeData.bCanAffectHumans = true;
    (*this).Data.GrenadeData.DealsDamage = false;
    (*this).Data.GrenadeData.BaseDamage = 4.000000000e+02f;
    (*this).Data.GrenadeData.MinimumDamage = 1.000000000e+02f;
    (*this).Data.GrenadeData.ExplosionLoudness = 1.000000000e+00f;
    (*this).Data.GrenadeData.EffectPreventionChannel = ECC_GameTraceChannel7;
    (*this).Data.GrenadeData.DamageTypeClass = nullptr;
    (*this).Data.GrenadeData.ShotImpactType = nullptr;
    (*this).Data.HitImpactType = nullptr;
    (*this).Data.HitImpactCooldown = 1.000000015e-01f;
    (*this).Data.HitImpactCustomMass = 0.000000000e+00f;
    (*this).Data.HitImpactUseDefaultMaterial = true;
    (*this).Data.ExplodeOnEnemyImpact = false;
    (*this).Data.Bounciness = 5.000000075e-02f;
    (*this).Data.Friction = 1.000000015e-01f;
    (*this).Data.MinFrictionFraction = 5.000000000e-01f;
    (*this).Data.HighThrowVector.X = 1.000000000e+00f;
    (*this).Data.HighThrowVector.Y = 0.000000000e+00f;
    (*this).Data.HighThrowVector.Z = 0.000000000e+00f;
    (*this).Data.LowThrowVector.X = 1.000000000e+00f;
    (*this).Data.LowThrowVector.Y = 0.000000000e+00f;
    (*this).Data.LowThrowVector.Z = 0.000000000e+00f;
    (*this).Data.HighThrowSpeed = 2.500000000e+03f;
    (*this).Data.LowThrowSpeed = 1.500000000e+03f;
    (*this).Data.HighThrowHeight = 1.000000000e+00f;
    (*this).Data.LowThrowHeight = 5.000000000e-01f;
    (*this).Data.SpawnDistance = 5.000000000e+01f;
    (*this).Data.ThrowRotationRange.X = 3.000000000e+02f;
    (*this).Data.ThrowRotationRange.Y = 6.000000000e+02f;
    (*this).Data.ThrowRotationAxis.X = 1.000000000e+00f;
    (*this).Data.ThrowRotationAxis.Y = 1.000000000e+00f;
    (*this).Data.ThrowRotationAxis.Z = 1.000000000e+00f;
    (*this).Data.WieldableClass = FSoftObjectPath();
    (*this).Data.WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).Data.WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).Data.HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).Data.WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Data.Class = EIGS_WieldableClass::C_Generic;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.ClassTag, 0)) = TEXT("Item.Wieldable");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.WieldingOffence, 0)) = TEXT("Offence.Player.Wielding.Weapon");
    (*this).Data.DefaultSkin = FSoftObjectPath();
    (*this).Data.ItemType = EIGS_ItemType::Item_Throwable;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.Image = FSoftObjectPath();
    (*this).Data.PickupMesh = FSoftObjectPath();
    (*this).Data.PickupMeshSkeletal = FSoftObjectPath();
    (*this).Data.ItemPickUpAudioEvent = FSoftObjectPath();
    (*this).Data.ItemThrowAudioEvent = FSoftObjectPath();
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Weapon");
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)) = {};
    (*this).Data.GrantedAbilities = {};
    (*this).Data.AppliedEffects = {};
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses = {};
    (*this).Data.AdditionalPreloadObjects = {};
}
