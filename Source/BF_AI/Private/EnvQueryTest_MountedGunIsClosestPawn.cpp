#include "EnvQueryTest_MountedGunIsClosestPawn.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_MountedGunIsClosestPawn::UEnvQueryTest_MountedGunIsClosestPawn() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

