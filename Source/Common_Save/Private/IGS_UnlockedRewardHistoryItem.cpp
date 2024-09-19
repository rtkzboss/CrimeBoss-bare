#include "IGS_UnlockedRewardHistoryItem.h"

FIGS_UnlockedRewardHistoryItem::FIGS_UnlockedRewardHistoryItem() {
    (*this).Level = 0;
    (*this).SelectedRewardItem = FGameplayTag();
    (*this).OtherRewardsForLevel = TArray<FGameplayTag>{};
}
