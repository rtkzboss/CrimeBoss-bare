#include "META_GoalSave.h"
#include "Templates/SubclassOf.h"

FMETA_GoalSave::FMETA_GoalSave() {
    (*this).GoalID = nullptr;
    (*this).Result = EMETA_GoalStatus::None;
    (*this).Missions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).GraphsTasks = TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_TasksInfoSave>{};
    (*this).FinishedInnerTasks = TArray<FMETA_FinishedInnerTaskInfoSave>{};
    (*this).ActionCards = TArray<FMETA_ActionCardGraph>{};
    (*this).VisitedGraphNodeIDs = TSet<int32>{};
}
