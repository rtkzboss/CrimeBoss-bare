#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_AISpawnPoints.generated.h"

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UEnvQueryGenerator_AISpawnPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_AISpawnPoints();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Range;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue SpawnPointType;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue TeamSide;

};
