#include "META_HeatManagerSaveData.h"

FMETA_HeatManagerSaveData::FMETA_HeatManagerSaveData() {
    (*this).DaysLeftForTheHeatRevision = 0;
    (*this).HeatState = EMETA_Heat::VeryLow;
    (*this).HeatValue = 0.000000000e+00f;
    (*this).PoliceInvestigationValue = 0.000000000e+00f;
    (*this).SheriffTargetGang = EMETA_Gang::None;
    (*this).GangsAttacksCounter = {};
    (*this).DetectivesPool = {};
    (*this).ActiveDetectives = {};
    (*this).UsedInvestigationValuesForDetectives = {};
    (*this).DeadDetectives = {};
    (*this).InvestigationEffects = {};
    (*this).HeatEffects = {};
}
