#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateBestTargetSquadControlled.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateBestTargetSquadControlled : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestTarget;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SuspectedTargetLocation;
    
public:
    UIGS_BTService_EvaluateBestTargetSquadControlled();

};

