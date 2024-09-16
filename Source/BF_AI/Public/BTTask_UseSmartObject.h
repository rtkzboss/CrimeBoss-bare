#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_UseSmartObject.generated.h"

class AActor;

UCLASS()
class BF_AI_API UBTTask_UseSmartObject : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_UseSmartObject();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SmartObjectBBKey;

    UPROPERTY()
    AActor* SmartObject;

};
