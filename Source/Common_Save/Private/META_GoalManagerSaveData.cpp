#include "META_GoalManagerSaveData.h"
#include "Templates/SubclassOf.h"

FMETA_GoalManagerSaveData::FMETA_GoalManagerSaveData() {
    (*this).StoryGoalsSave = TArray<FMETA_GoalSave>{};
    (*this).MoneyMakingGoalsSave = TArray<FMETA_MoneyMakingGoalSave>{};
    (*this).GoalsPools = TArray<TSubclassOf<UMETA_BaseGoal>>{};
    (*this).BacklogGoalsPools = TArray<TSubclassOf<UMETA_BaseGoal>>{};
    (*this).FinishedGoals = TArray<FMETA_FinishedGoal>{};
    (*this).GoalsRepeatCounters = TArray<FMETA_GoalsObjectIDCounter>{};
    (*this).HiddenGoalsData = TMap<TSubclassOf<UMETA_HiddenGoalID>, FMETA_HiddenGoalsSaveInfo>{};
}
