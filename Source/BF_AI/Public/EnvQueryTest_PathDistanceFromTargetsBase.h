#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_PathDistanceFromTargetsBase.generated.h"

UCLASS(Abstract)
class BF_AI_API UEnvQueryTest_PathDistanceFromTargetsBase : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_PathDistanceFromTargetsBase();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Characters;

};
