#include "EnvQueryTest_AISpawnGroupIsOnCoolDown.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_AISpawnGroupIsOnCoolDown::UEnvQueryTest_AISpawnGroupIsOnCoolDown() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

