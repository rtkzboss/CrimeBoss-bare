#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RotatePerpendicularToBBEntry.generated.h"

UCLASS(Config=Game)
class BF_AI_API UBTTask_RotatePerpendicularToBBEntry : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_RotatePerpendicularToBBEntry();

protected:
    UPROPERTY(Config, EditAnywhere)
    float Precision;

};
