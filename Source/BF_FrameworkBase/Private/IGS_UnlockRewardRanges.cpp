#include "IGS_UnlockRewardRanges.h"
#include "UObject/NoExportTypes.h"

FIGS_UnlockRewardRanges::FIGS_UnlockRewardRanges() {
    (*this).LevelRange = FInt32Range(FInt32RangeBound::Inclusive(1), FInt32RangeBound::Inclusive(1));
    (*this).RewardCategoryMap = TMap<EIGS_UnlockCategory, FIGS_UnlockRewardMaxAmount>{};
    (*this).AvailableItems = FGameplayTagContainer();
    (*this).ForcedPool = TArray<FIGS_UnlockRewardForcedPool>{};
}
