#include "META_GoalManagerSaveData.h"

FMETA_GoalManagerSaveData::FMETA_GoalManagerSaveData() {
    (*this).StoryGoalsSave = {};
    (*this).MoneyMakingGoalsSave = {};
    (*this).GoalsPools = {};
    (*this).BacklogGoalsPools = {};
    (*this).FinishedGoals = {};
    (*this).GoalsRepeatCounters = {};
    (*this).HiddenGoalsData = {};
}
