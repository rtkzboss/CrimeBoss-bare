#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsInRangeOnPath.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsInRangeOnPath : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsInRangeOnPath();

protected:
    UPROPERTY(EditAnywhere)
    float MinDistance;

    UPROPERTY(EditAnywhere)
    float MaxDistance;

};
