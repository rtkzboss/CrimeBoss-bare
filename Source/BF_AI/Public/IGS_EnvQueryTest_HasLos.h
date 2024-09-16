#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_HasLos.generated.h"

UCLASS()
class UIGS_EnvQueryTest_HasLos : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UIGS_EnvQueryTest_HasLos();

    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue VerticalOffsetItem;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue VerticalOffsetTarget;

};
