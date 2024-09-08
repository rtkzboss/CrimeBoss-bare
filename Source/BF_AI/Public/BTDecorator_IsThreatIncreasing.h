#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsThreatIncreasing.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsThreatIncreasing : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float TimeInterval;
    
public:
    UBTDecorator_IsThreatIncreasing();

};

