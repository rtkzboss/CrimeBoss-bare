#include "IGS_UnlockRewardForcedPool.h"

FIGS_UnlockRewardForcedPool::FIGS_UnlockRewardForcedPool() {
    (*this).Level = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Item, 0)) = NAME_None;
    (*this).AllowedQuality = 0;
}
