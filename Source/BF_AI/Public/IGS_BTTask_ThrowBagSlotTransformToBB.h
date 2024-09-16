#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_ThrowBagSlotTransformToBB.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_ThrowBagSlotTransformToBB : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_ThrowBagSlotTransformToBB();

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowSlotKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowSlotPositionKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ThrowSlotLookAtPositionKey;

};
