#include "IGS_EnvQueryTest_LyingOnGround.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UIGS_EnvQueryTest_LyingOnGround::UIGS_EnvQueryTest_LyingOnGround() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    auto gen = UEnvQueryTest::StaticClass()->FindPropertyByName("bWorkOnFloatValues");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

