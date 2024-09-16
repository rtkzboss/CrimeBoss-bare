#include "META_GraphsData.h"

UMETA_GraphsData::UMETA_GraphsData() {
    (*this).FirstPlotlineDays.Min = 1;
    (*this).FirstPlotlineDays.Max = 3;
    (*this).SecondPlotlineDays.Min = 3;
    (*this).SecondPlotlineDays.Max = 6;
    (*this).AnyNextPlotlineDays.Min = 2;
    (*this).AnyNextPlotlineDays.Max = 4;
    (*this).CrewRandEventsGraph = FSoftObjectPath();
    (*this).SpecialCrewEventsGraph = FSoftObjectPath();
}

TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> UMETA_GraphsData::GetStartedGraphs(const TArray<EIGS_CharacterID>& inAvailableUniqueCharacters) {
    return {};
}

TSoftObjectPtr<UMETA_BaseStoryGraphManager> UMETA_GraphsData::GetSpecialCrewEventsGraph() const {
    return {};
}

FMETA_Interval UMETA_GraphsData::GetSecondPlotlineDays() const {
    return FMETA_Interval{};
}

TArray<FIGS_PlotlineGraphData> UMETA_GraphsData::GetPlotlineGraphs() {
    return {};
}

FMETA_Interval UMETA_GraphsData::GetFirstPlotlineDays() const {
    return FMETA_Interval{};
}

TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> UMETA_GraphsData::GetEntitlementsGraph() const {
    return {};
}

TSoftObjectPtr<UMETA_BaseStoryGraphManager> UMETA_GraphsData::GetCrewRandEventsGraph() const {
    return {};
}

void UMETA_GraphsData::GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo) {
}

FMETA_Interval UMETA_GraphsData::GetAnyNextPlotlineDays() const {
    return FMETA_Interval{};
}

