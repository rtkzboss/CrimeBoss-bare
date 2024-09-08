#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SwitchWeaponBase.h"
#include "BTTask_SwitchWeaponBB.generated.h"

UCLASS()
class BF_AI_API UBTTask_SwitchWeaponBB : public UBTTask_SwitchWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector DesiredWeaponKey;
    
public:
    UBTTask_SwitchWeaponBB();

};

