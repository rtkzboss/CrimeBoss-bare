#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetRoationFromDefendPoint.generated.h"

UCLASS()
class BF_AI_API UBTTask_SetRoationFromDefendPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SetRoationFromDefendPoint();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LookPosKey;

};
