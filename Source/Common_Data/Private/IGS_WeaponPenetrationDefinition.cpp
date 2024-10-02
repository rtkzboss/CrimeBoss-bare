#include "IGS_WeaponPenetrationDefinition.h"

FIGS_WeaponPenetrationDefinition::FIGS_WeaponPenetrationDefinition() {
    (*this).Penetrates = false;
    (*this).DamageMultArray = TArray<float>{8.000000119e-01f, 5.000000000e-01f, 2.000000030e-01f};
    (*this).MaxPenetrationRange = 9.999000000e+03f;
}
