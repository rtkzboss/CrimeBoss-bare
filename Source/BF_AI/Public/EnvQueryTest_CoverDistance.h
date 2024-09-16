#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_CoverDistance.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_CoverDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_CoverDistance();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;

};
