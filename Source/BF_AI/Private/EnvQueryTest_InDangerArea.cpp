#include "EnvQueryTest_InDangerArea.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_InDangerArea::UEnvQueryTest_InDangerArea() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

