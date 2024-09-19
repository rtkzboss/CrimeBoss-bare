#include "META_Goal.h"
#include "Templates/SubclassOf.h"

FMETA_Goal::FMETA_Goal() {
    (*this).Graph = FSoftObjectPath();
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Icon = FSoftObjectPath();
    (*this).Picture = FSoftObjectPath();
    (*this).bIsGoalRepeatable = false;
    (*this).DaysBetweenAttempts = 0;
    (*this).MinRespectWhenGoalAvailableForPlayer = 0;
    (*this).Missions = TArray<TSubclassOf<UMETA_MissionID>>{};
    (*this).Result = EMETA_GoalStatus::None;
    (*this).AssignedTasks = TArray<UMETA_TaskCondition*>{};
    (*this).FinishedInnerTasks = TArray<UMETA_TaskCondition*>{};
    (*this).ActionCards = TArray<FMETA_ActionCardGraph>{};
    (*this).VisitedGraphNodeIDs = TSet<int32>{};
    (*this).SelectedActionCardNumber = -1;
    (*this).RespectByDefault = 0;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).Purpose = EMETA_GoalPurpose::INVALID;
    (*this).EntitlementTag = FGameplayTag();
}
