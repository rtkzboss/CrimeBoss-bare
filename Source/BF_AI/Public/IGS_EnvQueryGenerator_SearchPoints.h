#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryGenerator_SearchPoints.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_SearchPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UIGS_EnvQueryGenerator_SearchPoints();

private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> SearchPoints;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FilterLocked;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FilterVisited;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FilterVisitedTime;

};
