#include "EnvQueryTest_HasLosThroughCharacters.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_HasLosThroughCharacters::UEnvQueryTest_HasLosThroughCharacters() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

