#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateLooting.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateLooting : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_EvaluateLooting();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestLootingCollection;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestLootCarryable;

    UPROPERTY(EditAnywhere)
    UEnvQuery* LootCollectionsQuery;

    UPROPERTY(EditAnywhere)
    UEnvQuery* LootCarryablesQuery;

};
