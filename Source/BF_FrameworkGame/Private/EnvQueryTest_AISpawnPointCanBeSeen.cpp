#include "EnvQueryTest_AISpawnPointCanBeSeen.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_AISpawnPointCanBeSeen::UEnvQueryTest_AISpawnPointCanBeSeen() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

