#include "EnvQueryTest_SniperPOIInAngle.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_SniperPOIInAngle::UEnvQueryTest_SniperPOIInAngle() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    auto gen = UEnvQueryTest::StaticClass()->FindPropertyByName("bWorkOnFloatValues");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

