#include "IGS_AIWeaponDef.h"

FIGS_AIWeaponDef::FIGS_AIWeaponDef() {
    (*this).WeaponDefinition = nullptr;
    (*this).WeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
}
