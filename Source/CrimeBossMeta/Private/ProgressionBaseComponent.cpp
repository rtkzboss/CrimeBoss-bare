#include "ProgressionBaseComponent.h"

UProgressionBaseComponent::UProgressionBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UProgressionBaseComponent::UnlockItem(const FIGS_UnlockItemInfo& inUnlockItemInfo) {
}

bool UProgressionBaseComponent::TryUnlockItemByRequiredTagValue(FGameplayTag inUnlockTag, float InValue) {
    return false;
}

bool UProgressionBaseComponent::TryGetPendingUnlockedRewards(TArray<FIGS_UnlockItemInfo>& outUnlockedItems) {
    return false;
}

void UProgressionBaseComponent::SetPendingPoints(float inPoints) {
}

void UProgressionBaseComponent::SaveSelectedUnlockedRewardsHistory(const FGameplayTag& selectedReward) {
}

void UProgressionBaseComponent::SavePendingUnlockRewards(TArray<FIGS_UnlockItemInfo>& intUnlockedItems) {
}

void UProgressionBaseComponent::SavePendingLevelUps(const int32 inLevelUps) {
}

bool UProgressionBaseComponent::SaveLastClaimedDailyMultiplayerDateTime(FDateTime InDateTime) {
    return false;
}

void UProgressionBaseComponent::ResetAccumulatedProgressionResult() {
}

bool UProgressionBaseComponent::ProcessNextPendingLevelUp(TArray<FIGS_UnlockItemInfo>& outUnlockedItems) {
    return false;
}

void UProgressionBaseComponent::ProcessMissionResults(FIGS_MissionResult& inMissionResult, bool inAccumulateResult) {
}

bool UProgressionBaseComponent::HasSomePendingUnlockRewards() const {
    return false;
}

bool UProgressionBaseComponent::HasSomePendingLevels() const {
    return false;
}

TArray<FGameplayTag> UProgressionBaseComponent::GetPendingUnlockRewards() const {
    return {};
}

float UProgressionBaseComponent::GetPendingPoints() const {
    return 0.000000000e+00f;
}

int32 UProgressionBaseComponent::GetPendingLevelsCount() const {
    return 0;
}

FDateTime UProgressionBaseComponent::GetLastClaimedDailyMultiplayerDateTime() const {
    return FDateTime{};
}

float UProgressionBaseComponent::GetDailyXPBonus(int32 inLevel) const {
    return 0.000000000e+00f;
}

float UProgressionBaseComponent::GetDailyCashBonus(int32 inLevel) const {
    return 0.000000000e+00f;
}

void UProgressionBaseComponent::ClearPendingUnlockedRewards() {
}

bool UProgressionBaseComponent::CanRewardBeClaimed(FDateTime InDateTime) const {
    return false;
}



void UProgressionBaseComponent::AddPendingPoints(float inPoints) {
}

