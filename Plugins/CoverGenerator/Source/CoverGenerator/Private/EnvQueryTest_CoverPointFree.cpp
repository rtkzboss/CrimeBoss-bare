#include "EnvQueryTest_CoverPointFree.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_CoverPointFree::UEnvQueryTest_CoverPointFree() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

