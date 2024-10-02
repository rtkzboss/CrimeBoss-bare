#include "IGS_EnvQueryTest_IsInFiringRange.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UIGS_EnvQueryTest_IsInFiringRange::UIGS_EnvQueryTest_IsInFiringRange() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

