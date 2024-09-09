#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetFollowRotation.generated.h"

UCLASS()
class BF_AI_API UBTTask_SetFollowRotation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SetFollowRotation();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LookPosKey;
    
};

