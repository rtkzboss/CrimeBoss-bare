#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateBestTarget.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_EvaluateBestTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestTarget;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SuspectedTargetLocation;
    
    UPROPERTY(EditAnywhere)
    bool TracePlayers;
    
public:
    UIGS_BTService_EvaluateBestTarget();

};

