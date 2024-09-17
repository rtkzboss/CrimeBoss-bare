#include "IGS_WieldableBaseData.h"

FIGS_WieldableBaseData::FIGS_WieldableBaseData() {
    (*this).WieldableClass = FSoftObjectPath();
    (*this).WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Class = EIGS_WieldableClass::C_Generic;
    (*this).ClassTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable"));
    (*this).WieldingOffence = FGameplayTag();
    (*this).DefaultSkin = FSoftObjectPath();
}
