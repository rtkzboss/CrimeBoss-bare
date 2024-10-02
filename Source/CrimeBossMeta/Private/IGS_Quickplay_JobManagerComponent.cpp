#include "IGS_Quickplay_JobManagerComponent.h"

UIGS_Quickplay_JobManagerComponent::UIGS_Quickplay_JobManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_Quickplay_JobManagerComponent::ProcessMissionResultByMissionSubtype(const FIGS_MissionResult& inResult, APlayerState* inPlayerState, FDateTime inCurrentDateTime) {
}

TArray<UMETA_HordeModeMission*> UIGS_Quickplay_JobManagerComponent::GetRecentHordeModeMissions(int32 inMaxCount, bool inIncludeBest) const {
    return {};
}

UMETA_HordeModeMission* UIGS_Quickplay_JobManagerComponent::GetBestHordeModeMission() const {
    return nullptr;
}

void UIGS_Quickplay_JobManagerComponent::AddHordeModeMission(UMETA_HordeModeMission* inHordeModeMission) {
}

