#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_WaitForOnGround.generated.h"

UCLASS()
class BF_AI_API UBTTask_WaitForOnGround : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CivlianToZipKey;
    
    UBTTask_WaitForOnGround();

};

