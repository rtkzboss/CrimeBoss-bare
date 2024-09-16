#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateThrowingComponents.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateThrowingComponents : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_EvaluateThrowingComponents();

protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplateAlways;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplateControl;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestLootCollection;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestLootCarryable;

};
