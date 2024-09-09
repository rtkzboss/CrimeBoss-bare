#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SwitchToMelee.h"
#include "BTService_ButcherSwitchToMelee.generated.h"

class UIGS_WieldableInventoryObjectBase;

UCLASS()
class BF_AI_API UBTService_ButcherSwitchToMelee : public UBTService_SwitchToMelee {
    GENERATED_BODY()
public:
    UBTService_ButcherSwitchToMelee();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetUnreachable;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector UnreachableWeaponSelected;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY()
    float CheckTargetreachableTime;
    
    UPROPERTY()
    float CurrentTime;
    
    UPROPERTY()
    UIGS_WieldableInventoryObjectBase* SawWieldable;
    
};

