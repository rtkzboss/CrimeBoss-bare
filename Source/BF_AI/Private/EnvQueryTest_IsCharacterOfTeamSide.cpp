#include "EnvQueryTest_IsCharacterOfTeamSide.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_IsCharacterOfTeamSide::UEnvQueryTest_IsCharacterOfTeamSide() {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    (*this).SetWorkOnFloatValues(false);
}

