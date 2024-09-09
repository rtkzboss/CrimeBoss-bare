#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_SmartObjectNotLocked.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_SmartObjectNotLocked : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_SmartObjectNotLocked();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SmartObjectToUse;
    
};

