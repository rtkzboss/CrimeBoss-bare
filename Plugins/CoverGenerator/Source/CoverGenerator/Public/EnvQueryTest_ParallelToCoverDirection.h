#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_ParallelToCoverDirection.generated.h"

UCLASS()
class UEnvQueryTest_ParallelToCoverDirection : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_ParallelToCoverDirection();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxEpsilon;

};
