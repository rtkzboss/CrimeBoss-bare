#include "IGS_ParticleParameters.h"

FIGS_ParticleParameters::FIGS_ParticleParameters() {
    (*this).Power = 1.000000000e+00f;
    (*this).AttachToComponent = nullptr;
    (*this).BoneName = NAME_None;
    (*this).IgnoreOptimizations = false;
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)) = {};
}
