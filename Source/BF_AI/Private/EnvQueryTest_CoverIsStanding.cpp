#include "EnvQueryTest_CoverIsStanding.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_CoverIsStanding::UEnvQueryTest_CoverIsStanding() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

