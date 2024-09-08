#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_PathDistanceFromTargetsBase.generated.h"

class UEnvQueryContext;

UCLASS(Abstract)
class BF_AI_API UEnvQueryTest_PathDistanceFromTargetsBase : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Characters;
    
    UEnvQueryTest_PathDistanceFromTargetsBase();

};

