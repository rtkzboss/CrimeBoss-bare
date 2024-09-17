#include "EnvQueryTest_IsZiptiedByOther.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_IsZiptiedByOther::UEnvQueryTest_IsZiptiedByOther() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

