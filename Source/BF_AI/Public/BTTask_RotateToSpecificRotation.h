#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RotateToSpecificRotation.generated.h"

UCLASS()
class BF_AI_API UBTTask_RotateToSpecificRotation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_RotateToSpecificRotation();

protected:
    UPROPERTY(EditAnywhere)
    float AcceptedAngle;

};
