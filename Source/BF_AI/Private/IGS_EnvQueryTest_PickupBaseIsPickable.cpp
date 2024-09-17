#include "IGS_EnvQueryTest_PickupBaseIsPickable.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UIGS_EnvQueryTest_PickupBaseIsPickable::UIGS_EnvQueryTest_PickupBaseIsPickable() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

