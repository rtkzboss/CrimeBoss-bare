#include "META_PlotlineSelection.h"
#include "Templates/SubclassOf.h"

UMETA_PlotlineSelection::UMETA_PlotlineSelection() {
    (*this).InvestigationGrowth = 1.000000000e+00f;
    (*this).FinalScoreMultiplier = 1.000000000e+00f;
    (*this).AnyNextPlotlineDays.Min = 2;
    (*this).AnyNextPlotlineDays.Max = 4;
    (*this).CrewRandEventsGraph = FSoftObjectPath();
    (*this).SpecialCrewEventsGraph = FSoftObjectPath();
}

bool UMETA_PlotlineSelection::IsBossBonusIgnored(EMETA_BonusType inBonusType) const {
    return false;
}

TArray<FGameplayTag> UMETA_PlotlineSelection::GetStartingUnlocks() const {
    return {};
}

TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> UMETA_PlotlineSelection::GetStartedGraphs(const TArray<EIGS_CharacterID>& inAvailableUniqueCharacters) {
    return {};
}

TSoftObjectPtr<UMETA_BaseStoryGraphManager> UMETA_PlotlineSelection::GetSpecialCrewEventsGraph() const {
    return {};
}

int32 UMETA_PlotlineSelection::GetRandomizedValidTileGroup() const {
    return 0;
}

int32 UMETA_PlotlineSelection::GetRandomizedPlayersInitialTerritory() const {
    return 0;
}

TSubclassOf<UMETA_BaseGoal> UMETA_PlotlineSelection::GetPrimaryGoalID() const {
    return nullptr;
}

TArray<FIGS_PlotlineGraphData> UMETA_PlotlineSelection::GetPlotlineGraphs() {
    return {};
}

TArray<FMETA_Interval> UMETA_PlotlineSelection::GetPlotlineDaysArray() const {
    return {};
}

TArray<FGameplayTagContainer> UMETA_PlotlineSelection::GetPlayerTileGroups() const {
    return {};
}

float UMETA_PlotlineSelection::GetInvestigationGrowthMultiplier() const {
    return 0.000000000e+00f;
}

int32 UMETA_PlotlineSelection::GetInitialSoldiersAmount() const {
    return 0;
}

EMETA_ArmyTier UMETA_PlotlineSelection::GetInitialArmyTier() const {
    return EMETA_ArmyTier::Low;
}

FMETA_GangInitialConfiguration UMETA_PlotlineSelection::GetGangInitialConfig(EMETA_Gang inGang) {
    return FMETA_GangInitialConfiguration{};
}

float UMETA_PlotlineSelection::GetFinalScoreMultiplier() const {
    return 0.000000000e+00f;
}

TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> UMETA_PlotlineSelection::GetEntitlementsGraph() const {
    return {};
}

FMETA_EnemyTierLimitOnCampaignStart UMETA_PlotlineSelection::GetEnemyTierLimitOnCampaignStart() const {
    return FMETA_EnemyTierLimitOnCampaignStart{};
}

TSoftObjectPtr<UMETA_BaseStoryGraphManager> UMETA_PlotlineSelection::GetCrewRandEventsGraph() const {
    return {};
}

void UMETA_PlotlineSelection::GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo) {
}

FMETA_CareerStartStuff UMETA_PlotlineSelection::GetCareerStartStuff() const {
    return FMETA_CareerStartStuff{};
}

EMETA_CampaignVictoryCondition UMETA_PlotlineSelection::GetCampaignVictoryCondition() const {
    return EMETA_CampaignVictoryCondition::Default;
}

FGameplayTag UMETA_PlotlineSelection::GetCampaignModeTag() const {
    return FGameplayTag();
}

FMETA_Interval UMETA_PlotlineSelection::GetAnyNextPlotlineDays() const {
    return FMETA_Interval{};
}

bool UMETA_PlotlineSelection::CanGraphBeExecutedWhenGameFinished(const TSoftObjectPtr<UMETA_BaseStoryGraphManager>& inGraph) const {
    return false;
}

