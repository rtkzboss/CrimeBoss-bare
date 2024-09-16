#include "IGS_UnlockedRewardHistoryItem.h"

FIGS_UnlockedRewardHistoryItem::FIGS_UnlockedRewardHistoryItem() {
    (*this).Level = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).SelectedRewardItem, 0)) = NAME_None;
    (*this).OtherRewardsForLevel = {};
}
