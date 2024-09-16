#include "EnvQueryTest_CoverLocked.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_CoverLocked::UEnvQueryTest_CoverLocked() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    auto gen = UEnvQueryTest::StaticClass()->FindPropertyByName("bWorkOnFloatValues");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

