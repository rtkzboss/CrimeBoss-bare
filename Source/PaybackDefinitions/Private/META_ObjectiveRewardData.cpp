#include "META_ObjectiveRewardData.h"

FMETA_ObjectiveRewardData::FMETA_ObjectiveRewardData() {
    (*this).RewardType = EMETA_ObjectiveReward::None;
    (*this).Cash = 0;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).LootItem, 0)) = NAME_None;
    (*this).LootMonetaryValue = 0;
    (*this).WeaponQuality = EMETA_ItemQuality::None;
    (*this).WeaponID = nullptr;
    (*this).SoldiersAmount = 0;
}
