#include "META_ObjectiveRewardData.h"

FMETA_ObjectiveRewardData::FMETA_ObjectiveRewardData() {
    (*this).RewardType = EMETA_ObjectiveReward::None;
    (*this).Cash = 0;
    (*this).LootItem = FGameplayTag();
    (*this).LootMonetaryValue = 0;
    (*this).WeaponQuality = EMETA_ItemQuality::None;
    (*this).WeaponID = nullptr;
    (*this).SoldiersAmount = 0;
}
