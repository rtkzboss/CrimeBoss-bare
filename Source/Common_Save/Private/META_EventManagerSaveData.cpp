#include "META_EventManagerSaveData.h"

FMETA_EventManagerSaveData::FMETA_EventManagerSaveData() {
    (*this).DefaultGraphValues = TArray<FMETA_GraphStructSave>{};
    (*this).HeistersOnEvent = TMap<FGameplayTag, FMETA_HeistersOnEvent>{};
    (*this).EventTime = EMETA_EventTime::DayStart;
    (*this).SavedGraphVariables = TMap<FGameplayTag, int32>{};
    (*this).bPoolFrozen = false;
    (*this).SavedTimerNodes = TMap<FMETA_GraphNodeSave, FMETA_TimerNodeSaveData>{};
    (*this).SavedLoopBranchNodes = TMap<FMETA_GraphNodeSave, FMETA_LoopBranchNodeSaveData>{};
    (*this).FinishedGraphsResults = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GoalStatus>{};
    (*this).PreparedPlotlines = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>{};
    (*this).ExecutingPlotlines = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>{};
    (*this).SavedEconomyGraphVariables = TMap<FGameplayTag, int32>{};
    (*this).SavedParentGraphs = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>{};
    (*this).bShouldCallEndDay = false;
    (*this).bEndDayWasCalled = false;
}
