#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_ThreatPointPriority.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_ThreatPointPriority : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_ThreatPointPriority();

private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue LowPrioScore;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue HighPrioScore;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDrawDebugLines;
    
};

