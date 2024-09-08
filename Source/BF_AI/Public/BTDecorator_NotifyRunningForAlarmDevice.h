#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_NotifyRunningForAlarmDevice.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_NotifyRunningForAlarmDevice : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AlarmDeviceToUse;
    
public:
    UBTDecorator_NotifyRunningForAlarmDevice();

};

