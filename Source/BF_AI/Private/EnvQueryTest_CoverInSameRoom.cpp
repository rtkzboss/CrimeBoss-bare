#include "EnvQueryTest_CoverInSameRoom.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_CoverInSameRoom::UEnvQueryTest_CoverInSameRoom() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    auto gen = UEnvQueryTest::StaticClass()->FindPropertyByName("bWorkOnFloatValues");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

