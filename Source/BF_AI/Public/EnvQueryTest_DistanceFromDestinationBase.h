#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_DistanceFromDestinationBase.generated.h"

UCLASS(Abstract)
class BF_AI_API UEnvQueryTest_DistanceFromDestinationBase : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_DistanceFromDestinationBase();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Characters;

};
