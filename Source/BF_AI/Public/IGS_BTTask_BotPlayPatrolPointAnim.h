#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_BotPlayPatrolPointAnim.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_BotPlayPatrolPointAnim : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_BotPlayPatrolPointAnim();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector PatrolPointKey;

};
