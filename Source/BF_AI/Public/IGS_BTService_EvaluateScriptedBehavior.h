#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateScriptedBehavior.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateScriptedBehavior : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector PickupBagKey;
    
    UIGS_BTService_EvaluateScriptedBehavior();

};

