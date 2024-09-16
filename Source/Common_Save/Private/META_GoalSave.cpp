#include "META_GoalSave.h"

FMETA_GoalSave::FMETA_GoalSave() {
    (*this).GoalID = nullptr;
    (*this).Result = EMETA_GoalStatus::None;
    (*this).Missions = {};
    (*this).GraphsTasks = {};
    (*this).FinishedInnerTasks = {};
    (*this).ActionCards = {};
    (*this).VisitedGraphNodeIDs = {};
}
