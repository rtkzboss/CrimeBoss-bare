#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_EvaluateBestCover.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTTask_EvaluateBestCover : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_EvaluateBestCover();

protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;

    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplateDefendPoint;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestCoverKey;

};
