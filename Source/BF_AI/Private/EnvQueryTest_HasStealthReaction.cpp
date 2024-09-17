#include "EnvQueryTest_HasStealthReaction.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_HasStealthReaction::UEnvQueryTest_HasStealthReaction() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

