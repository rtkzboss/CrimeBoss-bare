#include "IGS_AISecondaryWeaponDef.h"
#include "GameplayTagContainer.h"

UIGS_AISecondaryWeaponDef::UIGS_AISecondaryWeaponDef() {
    (*this).Weapon.MaxFiringRange = 2.000000000e+03f;
    (*this).Weapon.CombatRange.Min = 5.000000000e+02f;
    (*this).Weapon.CombatRange.Max = 1.200000000e+03f;
    (*this).Weapon.ShotsToFire.Min = 2;
    (*this).Weapon.ShotsToFire.Max = 10;
    (*this).Weapon.ShotsToFireSpray.Min = 6;
    (*this).Weapon.ShotsToFireSpray.Max = 12;
    (*this).Weapon.AmmoUsedUntilReload.Min = 30;
    (*this).Weapon.AmmoUsedUntilReload.Max = 40;
    (*this).Weapon.TimeToFire.Min = 1.000000000e+00f;
    (*this).Weapon.TimeToFire.Max = 1.500000000e+00f;
    (*this).Weapon.TimeToFireSpray.Min = 3.000000000e+00f;
    (*this).Weapon.TimeToFireSpray.Max = 5.000000000e+00f;
    (*this).Weapon.TimeUntilReload.Min = 4.000000000e+00f;
    (*this).Weapon.TimeUntilReload.Max = 6.000000000e+00f;
    (*this).Weapon.AfterFireCooldown.Min = 5.000000000e-01f;
    (*this).Weapon.AfterFireCooldown.Max = 2.000000000e+00f;
    (*this).Weapon.AfterFireCooldownCover.Min = 1.500000000e+00f;
    (*this).Weapon.AfterFireCooldownCover.Max = 3.000000000e+00f;
    (*this).Weapon.WeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon.SecondaryWeapon"));
}

