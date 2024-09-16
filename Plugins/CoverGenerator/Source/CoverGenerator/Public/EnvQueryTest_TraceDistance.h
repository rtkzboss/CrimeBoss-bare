#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_TraceDistance.generated.h"

UCLASS()
class UEnvQueryTest_TraceDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_TraceDistance();

    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxTraceDistance;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue VerticalOffset;

};
