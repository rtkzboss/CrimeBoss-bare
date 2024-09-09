#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_SniperPoints.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class BF_AI_API UEnvQueryGenerator_SniperPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_SniperPoints();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> IgnoreSniperPoints;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue OnlyCanVisit;
    
};

