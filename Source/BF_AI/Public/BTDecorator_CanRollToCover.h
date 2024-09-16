#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CanRollToCover.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_CanRollToCover : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CanRollToCover();

private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DodgeDistanceKey;

};
