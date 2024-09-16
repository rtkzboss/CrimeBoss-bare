#include "IGS_DecalParameters.h"

FIGS_DecalParameters::FIGS_DecalParameters() {
    (*this).RandomRoll = true;
    (*this).RollDegree = 0.000000000e+00f;
    (*this).AttachToSocket = NAME_None;
    (*this).AttachToComponent = nullptr;
    (*this).IgnoreOptimizations = false;
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)) = {};
}
