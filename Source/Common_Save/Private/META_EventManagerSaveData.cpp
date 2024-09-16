#include "META_EventManagerSaveData.h"

FMETA_EventManagerSaveData::FMETA_EventManagerSaveData() {
    (*this).DefaultGraphValues = {};
    (*this).HeistersOnEvent = {};
    (*this).EventTime = EMETA_EventTime::DayStart;
    (*this).SavedGraphVariables = {};
    (*this).bPoolFrozen = false;
    (*this).SavedTimerNodes = {};
    (*this).SavedLoopBranchNodes = {};
    (*this).FinishedGraphsResults = {};
    (*this).PreparedPlotlines = {};
    (*this).SavedEconomyGraphVariables = {};
    (*this).SavedParentGraphs = {};
    (*this).bShouldCallEndDay = false;
    (*this).bEndDayWasCalled = false;
}
