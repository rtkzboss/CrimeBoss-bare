#include "EnvQueryTest_SniperPOIInAngle.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_SniperPOIInAngle::UEnvQueryTest_SniperPOIInAngle() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

