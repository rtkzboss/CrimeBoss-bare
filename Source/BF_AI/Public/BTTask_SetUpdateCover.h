#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetUpdateCover.generated.h"

UCLASS()
class BF_AI_API UBTTask_SetUpdateCover : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector UpdateCoverKey;
    
    UPROPERTY(EditAnywhere)
    bool UpdateCover;
    
public:
    UBTTask_SetUpdateCover();

};

