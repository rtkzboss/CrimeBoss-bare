#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_CanCharge.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_CanCharge : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UBTDecorator_CanCharge();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    float CoolDownTime;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceToCharge;
    
    UPROPERTY(EditAnywhere)
    float ExtraChargeDistanceBehindPlayer;
    
};

