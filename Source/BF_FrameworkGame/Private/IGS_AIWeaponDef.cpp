#include "IGS_AIWeaponDef.h"

FIGS_AIWeaponDef::FIGS_AIWeaponDef() {
    (*this).WeaponDefinition = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
}
