#include "EnvQueryTest_CoverCrossingLineOfFire.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_CoverCrossingLineOfFire::UEnvQueryTest_CoverCrossingLineOfFire() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).BoolValue.DefaultValue = false;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    auto gen = UEnvQueryTest::StaticClass()->FindPropertyByName("bWorkOnFloatValues");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

