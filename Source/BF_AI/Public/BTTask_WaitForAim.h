#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitForAim.generated.h"

UCLASS()
class BF_AI_API UBTTask_WaitForAim : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitForAim();

protected:
    UPROPERTY(EditAnywhere)
    float Timeout;

};
