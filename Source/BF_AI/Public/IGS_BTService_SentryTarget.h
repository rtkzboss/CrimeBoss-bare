#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SentryTarget.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_SentryTarget : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_SentryTarget();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestTarget;
    
};

