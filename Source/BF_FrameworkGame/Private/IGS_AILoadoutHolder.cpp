#include "IGS_AILoadoutHolder.h"

FIGS_AILoadoutHolder::FIGS_AILoadoutHolder() {
    (*this).WeaponPool.PrimaryWeapons = {};
    (*this).WeaponPool.SecondaryWeapons = {};
    (*this).WeaponPool.MeleeWeapons = {};
    (*this).WeaponProbability = {};
    (*this).NoThrowableChance = 0;
    (*this).ThrowablePool = {};
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).ShowNoThrowableBool = 0;
}
