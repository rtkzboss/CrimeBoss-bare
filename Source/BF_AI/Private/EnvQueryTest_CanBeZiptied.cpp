#include "EnvQueryTest_CanBeZiptied.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_CanBeZiptied::UEnvQueryTest_CanBeZiptied() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

