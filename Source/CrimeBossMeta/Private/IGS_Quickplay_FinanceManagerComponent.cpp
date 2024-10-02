#include "IGS_Quickplay_FinanceManagerComponent.h"

UIGS_Quickplay_FinanceManagerComponent::UIGS_Quickplay_FinanceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_Quickplay_FinanceManagerComponent::SetBalance(int32 InValue) {
}

int32 UIGS_Quickplay_FinanceManagerComponent::CalculateUnlockItemCostFromInfo(const FIGS_UnlockItemInfo& inUnlockItemInfo, const float inRelativePrice) const {
    return 0;
}

int32 UIGS_Quickplay_FinanceManagerComponent::CalculateUnlockItemCost(const FGameplayTag inTagID, const float inRelativePrice) const {
    return 0;
}

void UIGS_Quickplay_FinanceManagerComponent::CalculateMissionRewardWithMultipliers(const FIGS_MissionResult& inMissionResult, int32& outMissionReward, float& outMultiplier, TArray<FIGS_MissionResultRewardItem>& outRewardItems) const {
}

void UIGS_Quickplay_FinanceManagerComponent::CalculateBaseMissionReward(const FIGS_MissionResult& inMissionResult, int32& outMissionReward) const {
}

void UIGS_Quickplay_FinanceManagerComponent::AddBalance(int32 InValue) {
}

