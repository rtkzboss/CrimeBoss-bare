#include "EnvQueryTest_PatrolPointVisitedByOther.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_PatrolPointVisitedByOther::UEnvQueryTest_PatrolPointVisitedByOther() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

