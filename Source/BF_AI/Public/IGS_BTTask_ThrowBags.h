#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_ThrowBags.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_ThrowBags : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowRequestKey;
    
public:
    UIGS_BTTask_ThrowBags();

};

