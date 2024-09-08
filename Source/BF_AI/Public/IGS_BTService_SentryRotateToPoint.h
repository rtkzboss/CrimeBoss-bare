#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SentryRotateToPoint.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_SentryRotateToPoint : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetPoint;
    
public:
    UIGS_BTService_SentryRotateToPoint();

};

