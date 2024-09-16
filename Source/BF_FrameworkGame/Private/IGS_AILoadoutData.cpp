#include "IGS_AILoadoutData.h"

FIGS_AILoadoutData::FIGS_AILoadoutData() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Chance = 0;
    (*this).NormalizedChance = 0.000000000e+00f;
}
