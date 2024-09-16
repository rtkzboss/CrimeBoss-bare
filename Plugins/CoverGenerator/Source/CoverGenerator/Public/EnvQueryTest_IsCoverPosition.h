#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_IsCoverPosition.generated.h"

UCLASS()
class UEnvQueryTest_IsCoverPosition : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_IsCoverPosition();

    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;

    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ContextHorizontalDistanceOffset;

    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ContextVerticalDistanceOffset;

    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderBoolValue DebugData;

};
