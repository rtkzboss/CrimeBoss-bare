#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_ThrowBagSlotToBB.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_ThrowBagSlotToBB : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_ThrowBagSlotToBB();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowRequestKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowSlotKey;

};
