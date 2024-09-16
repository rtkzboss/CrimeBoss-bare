#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_RollToCover.generated.h"

UCLASS()
class BF_AI_API UBTTask_RollToCover : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_RollToCover();

private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DodgeDistanceKey;

};
