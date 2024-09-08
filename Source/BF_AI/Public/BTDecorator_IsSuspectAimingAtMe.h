#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsSuspectAimingAtMe.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsSuspectAimingAtMe : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SeePlayerConeHalfAngleDeg;
    
    UPROPERTY(EditAnywhere)
    float SeePlayerDistance;
    
    UPROPERTY(EditAnywhere)
    float PlayerAimingAtHalfAngleDeg;
    
    UPROPERTY(EditAnywhere)
    bool ShouldCheckLineTrace;
    
public:
    UBTDecorator_IsSuspectAimingAtMe();

};

