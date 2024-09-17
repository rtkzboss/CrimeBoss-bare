#include "EnvQueryTest_InRoomSecurityType.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_InRoomSecurityType::UEnvQueryTest_InRoomSecurityType() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

