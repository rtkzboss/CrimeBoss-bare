#include "IGS_AILoadoutData.h"

FIGS_AILoadoutData::FIGS_AILoadoutData() {
    (*this).WeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Chance = 0;
    (*this).NormalizedChance = 0.000000000e+00f;
}
