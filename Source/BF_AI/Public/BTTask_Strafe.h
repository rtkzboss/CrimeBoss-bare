#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_Strafe.generated.h"

UCLASS()
class BF_AI_API UBTTask_Strafe : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_Strafe();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector IsDodgingKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DodgeDistanceKey;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ReactionCooldownTag;
    
};

