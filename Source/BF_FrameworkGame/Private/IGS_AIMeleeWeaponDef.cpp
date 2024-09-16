#include "IGS_AIMeleeWeaponDef.h"
#include "GameplayTagContainer.h"

UIGS_AIMeleeWeaponDef::UIGS_AIMeleeWeaponDef() {
    (*this).Weapon.ActivationRange = 2.000000000e+02f;
    (*this).Weapon.Cooldown.Min = 2.000000000e+00f;
    (*this).Weapon.Cooldown.Max = 3.000000000e+00f;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Weapon.WeaponTag, 0)) = TEXT("Item.Wieldable.Weapon.MeleeWeapon");
}

