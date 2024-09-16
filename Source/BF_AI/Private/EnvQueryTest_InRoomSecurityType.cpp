#include "EnvQueryTest_InRoomSecurityType.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

UEnvQueryTest_InRoomSecurityType::UEnvQueryTest_InRoomSecurityType() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
    auto gen = UEnvQueryTest::StaticClass()->FindPropertyByName("bWorkOnFloatValues");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
}

