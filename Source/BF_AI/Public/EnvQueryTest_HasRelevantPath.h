#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_HasRelevantPath.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_HasRelevantPath : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxCostCoef;
    
    UEnvQueryTest_HasRelevantPath();

};

