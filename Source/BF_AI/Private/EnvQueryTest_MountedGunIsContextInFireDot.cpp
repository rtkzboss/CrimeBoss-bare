#include "EnvQueryTest_MountedGunIsContextInFireDot.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_MountedGunIsContextInFireDot::UEnvQueryTest_MountedGunIsContextInFireDot() {
    (*this).RotationBoundsMutlipier = 8.000000119e-01f;
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

