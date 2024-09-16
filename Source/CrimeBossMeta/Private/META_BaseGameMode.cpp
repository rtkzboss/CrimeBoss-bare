#include "META_BaseGameMode.h"
#include "META_PlanningBoardManagerComponent.h"

AMETA_BaseGameMode::AMETA_BaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UMETA_PlanningBoardManagerComponent>(TEXT("PlanningBoardComponent"));
    (*this).MenuState = EMETA_MenuState::MS_StartUp;
    (*this).PlanningBoardManagerComponent = gen;
}

bool AMETA_BaseGameMode::ShouldLoadMetaDebugSave() {
    return false;
}

void AMETA_BaseGameMode::SetMetaMenuState(EMETA_MenuState inState) {
}

void AMETA_BaseGameMode::SetComponentsInitialized(EMETA_ManagersStartUpMode inStartUpMode) {
}


void AMETA_BaseGameMode::MenuStateChangeHandled(EMETA_MenuState inState) {
}

bool AMETA_BaseGameMode::IsMetaInDebugMode() {
    return false;
}


void AMETA_BaseGameMode::IncreaseCompletedCampaignCount(EIGS_UserDifficulty inDifficulty) {
}

void AMETA_BaseGameMode::HandleMenuStateChange_Implementation(EMETA_MenuState inState) {
}

UMETA_UIEventsManagerComponent* AMETA_BaseGameMode::GetUIEventsManagerComponent_Implementation() {
    return nullptr;
}

UMETA_StashManagerComponent* AMETA_BaseGameMode::GetStashManagerComponent_Implementation() {
    return nullptr;
}

UMETA_RandEventManagerComponent* AMETA_BaseGameMode::GetRandManagerComponent_Implementation() {
    return nullptr;
}

UMETA_PopupManagerComponent* AMETA_BaseGameMode::GetPopupManagerComponent_Implementation() {
    return nullptr;
}

UMETA_PlanningBoardManagerComponent* AMETA_BaseGameMode::GetPlanningBoardManagerComponent_Implementation() const {
    return nullptr;
}

UMETA_NotificationManagerComponent* AMETA_BaseGameMode::GetNotificationManagerComponent_Implementation() {
    return nullptr;
}

UMETA_MediaManagerComponent* AMETA_BaseGameMode::GetMediaManagerComponent_Implementation() {
    return nullptr;
}

UMETA_GoalManagerComponent* AMETA_BaseGameMode::GetGoalManagerComponent_Implementation() {
    return nullptr;
}

UMETA_EventManagerComponent* AMETA_BaseGameMode::GetEventManagerComponent_Implementation() {
    return nullptr;
}

UMETA_PlotlineSelection* AMETA_BaseGameMode::GetCurrentCampaignMode_Implementation() const {
    return nullptr;
}

UMETA_CrewManagerComponent* AMETA_BaseGameMode::GetCrewManagerComponent_Implementation() {
    return nullptr;
}

TSoftObjectPtr<UMETA_PlotlineSelection> AMETA_BaseGameMode::GetCampaignModeOnLoad(const UMETA_PlotlineSelectionMapping* inCampaignMapping, bool& outSuccess) {
    return {};
}

TSoftObjectPtr<UMETA_PlotlineSelection> AMETA_BaseGameMode::GetCampaignModeOnInitByTag(const UMETA_PlotlineSelectionMapping* inCampaignMapping, FGameplayTag inModeTag, bool& outSuccess) {
    return {};
}

void AMETA_BaseGameMode::GetCampaignDifficulty(EIGS_UserDifficulty& outUserDifficulty, FMETA_CampaignUserDifficultyConfiguration& outConfiguration) const {
}

UMETA_BossLevelComponent* AMETA_BaseGameMode::GetBossLevelComponent_Implementation() const {
    return nullptr;
}

UIGS_ActivityManagerBaseComponent* AMETA_BaseGameMode::GetActivityManagerComponent_Implementation() {
    return nullptr;
}

FMETA_ActiveCampaignConfiguration AMETA_BaseGameMode::GetActiveCampaignConfiguration() const {
    return FMETA_ActiveCampaignConfiguration{};
}


