#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_CoverFMemory.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryGenerator_CoverFMemory : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_CoverFMemory();

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SquareExtent;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue BoxHeight;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> GenerateAround;

};
