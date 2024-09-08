#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_FocusOnPoint.generated.h"

UCLASS()
class BF_AI_API UIGS_BTService_FocusOnPoint : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector PointKey;
    
public:
    UIGS_BTService_FocusOnPoint();

};

