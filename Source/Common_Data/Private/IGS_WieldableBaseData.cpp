#include "IGS_WieldableBaseData.h"

FIGS_WieldableBaseData::FIGS_WieldableBaseData() {
    (*this).WieldableClass = FSoftObjectPath();
    (*this).WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Class = EIGS_WieldableClass::C_Generic;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ClassTag, 0)) = TEXT("Item.Wieldable");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).WieldingOffence, 0)) = NAME_None;
    (*this).DefaultSkin = FSoftObjectPath();
}
