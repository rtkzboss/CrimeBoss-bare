#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_MoveToIdlePointSequence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_MoveToIdlePointSequence : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector PatrolPointKey;
    
public:
    UBTDecorator_MoveToIdlePointSequence();

};

