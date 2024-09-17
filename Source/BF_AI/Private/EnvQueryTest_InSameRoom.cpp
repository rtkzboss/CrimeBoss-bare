#include "EnvQueryTest_InSameRoom.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_InSameRoom::UEnvQueryTest_InSameRoom() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

