#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_PlayMocapAnimation.generated.h"

UCLASS()
class BF_AI_API UBTTask_PlayMocapAnimation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AnimationCommandKey;
    
    UBTTask_PlayMocapAnimation();

};

