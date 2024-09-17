#include "IGS_MeleeWeaponTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_MeleeAttackType.h"
#include "EIGS_WieldableClass.h"

FIGS_MeleeWeaponTableRow::FIGS_MeleeWeaponTableRow() {
    (*this).TagID = FGameplayTag();
    (*this).ID = nullptr;
    (*this).Data.WwiseWeaponName = FSoftObjectPath();
    (*this).Data.AttackDefinitions = {};
    (*this).Data.AIAttackDefinition.AttackType = EIGS_MeleeAttackType::MAT_Primary;
    (*this).Data.AIAttackDefinition.DamageType = nullptr;
    (*this).Data.AIAttackDefinition.ImpactType = nullptr;
    (*this).Data.AIAttackDefinition.BaseDamage = 5.000000000e+01f;
    (*this).Data.AIAttackDefinition.MaxRange = 1.000000000e+02f;
    (*this).Data.AIAttackDefinition.TraceRadius = 3.000000000e+01f;
    (*this).Data.WieldableClass = FSoftObjectPath();
    (*this).Data.WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).Data.WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).Data.HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).Data.WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Data.Class = EIGS_WieldableClass::C_Generic;
    (*this).Data.ClassTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable"));
    (*this).Data.WieldingOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Player.Wielding.Weapon"));
    (*this).Data.DefaultSkin = FSoftObjectPath();
    (*this).Data.ItemType = EIGS_ItemType::Item_MeleeWeapon;
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
    (*this).Data.ItemOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Actor.Item.Weapon"));
    (*this).Data.GrantedTags = FGameplayTagContainer();
    (*this).Data.GrantedAbilities = {};
    (*this).Data.AppliedEffects = {};
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses = {};
    (*this).Data.AdditionalPreloadObjects = {};
}
