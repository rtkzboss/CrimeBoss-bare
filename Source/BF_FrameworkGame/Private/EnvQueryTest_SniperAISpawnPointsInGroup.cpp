#include "EnvQueryTest_SniperAISpawnPointsInGroup.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_SniperAISpawnPointsInGroup::UEnvQueryTest_SniperAISpawnPointsInGroup() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

