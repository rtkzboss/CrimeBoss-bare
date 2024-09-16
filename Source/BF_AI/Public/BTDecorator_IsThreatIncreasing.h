#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsThreatIncreasing.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsThreatIncreasing : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsThreatIncreasing();

protected:
    UPROPERTY(EditAnywhere)
    float TimeInterval;

};
