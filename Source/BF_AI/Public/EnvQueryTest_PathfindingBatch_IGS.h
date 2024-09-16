#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "EnvQueryTest_PathfindingBatch_IGS.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_PathfindingBatch_IGS : public UEnvQueryTest_Pathfinding {
    GENERATED_BODY()
public:
    UEnvQueryTest_PathfindingBatch_IGS();

    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ScanRangeMultiplier;

};
