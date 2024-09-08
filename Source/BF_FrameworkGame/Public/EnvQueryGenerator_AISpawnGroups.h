#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_AISpawnGroups.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UEnvQueryGenerator_AISpawnGroups : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Range;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue TeamSide;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue UnitSpecialization;
    
    UEnvQueryGenerator_AISpawnGroups();

};

