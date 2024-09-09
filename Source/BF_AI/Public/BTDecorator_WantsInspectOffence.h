#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_WantsInspectOffence.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_WantsInspectOffence : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_WantsInspectOffence();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;
    
};

