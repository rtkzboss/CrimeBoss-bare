#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_PickupActor.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_PickupActor : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_PickupActor();

    UPROPERTY(EditAnywhere)
    float PickupDelay;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestPickupActor;

};
