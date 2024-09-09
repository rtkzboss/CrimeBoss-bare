#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_RemoverSpecialObjectives.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class BF_AI_API UEnvQueryGenerator_RemoverSpecialObjectives : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_RemoverSpecialObjectives();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Range;
    
};

