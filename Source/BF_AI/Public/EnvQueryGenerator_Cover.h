#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EnvQueryGenerator_Cover.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UEnvQueryGenerator_Cover : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue BoxHeight;
    
    UEnvQueryGenerator_Cover();

};

