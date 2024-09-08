#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToOffence.generated.h"

UCLASS(Config=Inherit)
class BF_AI_API UBTTask_MoveToOffence : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
public:
    UBTTask_MoveToOffence();

};

