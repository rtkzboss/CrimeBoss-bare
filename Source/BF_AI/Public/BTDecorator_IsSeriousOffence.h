#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsSeriousOffence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsSeriousOffence : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsSeriousOffence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
};

