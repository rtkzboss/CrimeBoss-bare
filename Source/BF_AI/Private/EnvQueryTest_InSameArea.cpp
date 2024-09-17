#include "EnvQueryTest_InSameArea.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_InSameArea::UEnvQueryTest_InSameArea() {
    (*this).Depth.DefaultValue = 2;
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

