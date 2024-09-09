#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_PickupBag.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_PickupBag : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_PickupBag();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestPickupBag;
    
};

