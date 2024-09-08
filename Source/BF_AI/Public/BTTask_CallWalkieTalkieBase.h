#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CallWalkieTalkieBase.generated.h"

UCLASS(Abstract)
class BF_AI_API UBTTask_CallWalkieTalkieBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Duration;
    
public:
    UBTTask_CallWalkieTalkieBase();

};

