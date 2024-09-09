#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitForRotation.generated.h"

UCLASS()
class BF_AI_API UBTTask_WaitForRotation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitForRotation();

protected:
    UPROPERTY(EditAnywhere)
    float MinAngle;
    
    UPROPERTY(EditAnywhere)
    float Timeout;
    
};

