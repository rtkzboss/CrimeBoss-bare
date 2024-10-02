#include "IGS_DebriefScreen.h"

UIGS_DebriefScreen::UIGS_DebriefScreen() {
}

void UIGS_DebriefScreen::StartAnimatedDebrief() {
}

void UIGS_DebriefScreen::SetMissionResult(const FIGS_MissionResult& inMissionResult, const TArray<FIGS_MissionResultRewardItem>& inMissionRewards) {
}

void UIGS_DebriefScreen::SetIsSkipped(bool inIsSkipped) {
}

void UIGS_DebriefScreen::PlayNextAnimation() {
}




TArray<FIGS_MissionResultRewardItem> UIGS_DebriefScreen::GetXpRewards() const {
    return {};
}

TArray<FIGS_DebriefAnimationSequenceData> UIGS_DebriefScreen::GetRewardUISequenceData(TArray<FIGS_MissionResultRewardItem>& inRewardItems) {
    return {};
}

TArray<FIGS_MissionResultRewardItem> UIGS_DebriefScreen::GetMoneyRewards() const {
    return {};
}

TArray<FIGS_MissionResultRewardItem> UIGS_DebriefScreen::GetMissionRewards() const {
    return {};
}

FIGS_MissionResult UIGS_DebriefScreen::GetMissionResult() const {
    return FIGS_MissionResult{};
}

FGameplayTag UIGS_DebriefScreen::GetCameraTag() const {
    return FGameplayTag();
}

int32 UIGS_DebriefScreen::GetAdditionalMissionDataByTag(FGameplayTag inTag) const {
    return 0;
}

void UIGS_DebriefScreen::AddAnimation(UIGS_AnimatedWidget* inAnimatedWidget, UObject* inPayloadData) {
}

