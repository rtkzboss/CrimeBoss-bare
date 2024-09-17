#include "EnvQueryTest_MountedGunIsReadyForAI.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_MountedGunIsReadyForAI::UEnvQueryTest_MountedGunIsReadyForAI() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

