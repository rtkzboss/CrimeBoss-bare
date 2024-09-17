#include "EnvQueryTest_AISpawnPointsAreOccupiedInGroup.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_AISpawnPointsAreOccupiedInGroup::UEnvQueryTest_AISpawnPointsAreOccupiedInGroup() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

