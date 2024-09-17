#include "IGS_ParticleParameters.h"

FIGS_ParticleParameters::FIGS_ParticleParameters() {
    (*this).Power = 1.000000000e+00f;
    (*this).AttachToComponent = nullptr;
    (*this).BoneName = NAME_None;
    (*this).IgnoreOptimizations = false;
    (*this).PoolTags = FGameplayTagContainer();
}
