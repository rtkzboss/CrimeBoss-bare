#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RotateToNextPathPoint.generated.h"

UCLASS()
class BF_AI_API UBTTask_RotateToNextPathPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_RotateToNextPathPoint();

protected:
    UPROPERTY(EditAnywhere)
    float AccaptedAngle;
    
};

