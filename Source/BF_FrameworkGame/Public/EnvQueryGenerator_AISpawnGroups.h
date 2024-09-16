#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_AISpawnGroups.generated.h"

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UEnvQueryGenerator_AISpawnGroups : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_AISpawnGroups();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Range;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue TeamSide;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue UnitSpecialization;

};
