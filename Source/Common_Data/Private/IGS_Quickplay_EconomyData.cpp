#include "IGS_Quickplay_EconomyData.h"
#include "Templates/SubclassOf.h"

UIGS_Quickplay_EconomyData::UIGS_Quickplay_EconomyData() {
    (*this).StartingCash = 10000;
    (*this).ProgressResetCompensationMoney = 100000;
    (*this).CompleteChainMoneyRewardMultiplier = 1.000000000e+00f;
    (*this).BaseItemCost = 10000;
    (*this).DigitsWithoutRounding = 3;
    (*this).HeisterLevelPerQuality = TMap<EMETA_ItemQuality, int32>{};
    (*this).CharacterStartingPerksPerQuality = TMap<EMETA_ItemQuality, int32>{};
    (*this).HordeMode_Players_LootWeightMultiplier = TMap<int32, float>{};
}

int32 UIGS_Quickplay_EconomyData::GetStartingCash() const {
    return 0;
}

float UIGS_Quickplay_EconomyData::GetRewardMultiplierForChainContract(TSubclassOf<UIGS_ChainContractID> inChainContractID) const {
    return 0.000000000e+00f;
}

int32 UIGS_Quickplay_EconomyData::GetCharacterLevelPerQuality(EMETA_ItemQuality inQuality) {
    return 0;
}

int32 UIGS_Quickplay_EconomyData::CalculateItemCostFromCategoryAndQuality(const EIGS_UnlockCategory inItemCategory, const EMETA_ItemQuality inItemQuality, const float inRelativePrice) const {
    return 0;
}

