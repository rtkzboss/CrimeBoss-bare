#include "IGS_AIControllerHeavy_SWAT.h"
#include "IGS_AIHeavySettingsComponent.h"

AIGS_AIControllerHeavy_SWAT::AIGS_AIControllerHeavy_SWAT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_AIHeavySettingsComponent>(TEXT("SettingsComponent"));
    (*this).SettingsComponent = gen;
}

