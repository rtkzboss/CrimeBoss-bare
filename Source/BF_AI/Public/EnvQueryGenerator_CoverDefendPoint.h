#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EnvQueryGenerator_CoverDefendPoint.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UEnvQueryGenerator_CoverDefendPoint : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue BoxHeight;
    
    UEnvQueryGenerator_CoverDefendPoint();

};

