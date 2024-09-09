#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_CombatCirlcle.generated.h"

class UEnvQueryContext;

UCLASS(BlueprintType, EditInlineNew)
class BF_AI_API UEnvQueryGenerator_CombatCirlcle : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_CombatCirlcle();

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Radius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SpaceBetweenFront;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
};

