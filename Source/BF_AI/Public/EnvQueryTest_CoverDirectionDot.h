#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_CoverDirectionDot.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_CoverDirectionDot : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_CoverDirectionDot();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;

};
