#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToCover.generated.h"

UCLASS()
class BF_AI_API UBTTask_MoveToCover : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UBTTask_MoveToCover();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CoverBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector IsApproachMoveKey;
    
};

