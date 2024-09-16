#include "META_FinishedMissionInfo.h"

FMETA_FinishedMissionInfo::FMETA_FinishedMissionInfo() {
    (*this).MissionID = nullptr;
    (*this).MissionOutcome = 0;
    (*this).BonusCash = 0;
    (*this).BonusLoot = {};
    (*this).bStealthCompletionFlag = false;
    (*this).MissionOutParameters = {};
    (*this).AssignedCrew = {};
    (*this).CivilianCasualties = 0;
    (*this).PoliceCasualties = 0;
    (*this).BonusObjectiveResult = EMETA_ObjectiveState::InProgress;
    (*this).Result = EMETA_JobResult::Ignored;
    (*this).AmbushResult = EMETA_JobResult::Ignored;
}
