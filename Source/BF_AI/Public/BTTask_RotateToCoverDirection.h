#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RotateToCoverDirection.generated.h"

UCLASS()
class BF_AI_API UBTTask_RotateToCoverDirection : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_RotateToCoverDirection();

protected:
    UPROPERTY(EditAnywhere)
    float AccaptedAngle;

};
