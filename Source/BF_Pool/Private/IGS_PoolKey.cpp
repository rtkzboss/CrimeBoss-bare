#include "IGS_PoolKey.h"

FIGS_PoolKey::FIGS_PoolKey() {
    (*this).PoolObjectClass = nullptr;
    auto gen = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTagContainer, 0)) = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTagContainer, 0)) = {};
}
