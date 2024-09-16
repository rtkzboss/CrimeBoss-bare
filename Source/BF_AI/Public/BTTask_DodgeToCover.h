#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_DodgeToCover.generated.h"

UCLASS()
class BF_AI_API UBTTask_DodgeToCover : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_DodgeToCover();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector IsDodgingKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MoveToPositionKey;

    UPROPERTY(EditAnywhere)
    FGameplayTag ReactionCooldownTag;

};
