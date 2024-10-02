#include "IGS_MeleeWeaponData.h"
#include "GameplayTagContainer.h"
#include "EIGS_ItemType.h"
#include "EIGS_MeleeAttackType.h"
#include "EIGS_MeleeTraceType.h"

FIGS_MeleeWeaponData::FIGS_MeleeWeaponData() {
    (*this).WwiseWeaponName = FSoftObjectPath();
    (*this).AttackDefinitions = TArray<FIGS_WeaponBashAttackDefinition>{};
    (*this).AIAttackDefinition.AttackType = EIGS_MeleeAttackType::MAT_Primary;
    (*this).AIAttackDefinition.TraceType = EIGS_MeleeTraceType::MTT_Sphere;
    (*this).AIAttackDefinition.DamageType = nullptr;
    (*this).AIAttackDefinition.ImpactType = nullptr;
    (*this).AIAttackDefinition.BaseDamage = 5.000000000e+01f;
    (*this).AIAttackDefinition.MaxTargets = 1;
    (*this).AIAttackDefinition.MaxRange = 1.000000000e+02f;
    (*this).AIAttackDefinition.TraceRadius = 3.000000000e+01f;
    (*this).AIAttackDefinition.SwingMainTraceRadius = 3.000000000e+01f;
    (*this).AIAttackDefinition.SwingTraceAngle = 9.000000000e+01f;
    (*this).WieldingOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Player.Wielding.Weapon"));
    (*this).ItemType = EIGS_ItemType::Item_MeleeWeapon;
    (*this).ItemOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Actor.Item.Weapon"));
}
