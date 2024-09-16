#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SwitchWeaponBase.generated.h"

UCLASS(Abstract)
class BF_AI_API UBTTask_SwitchWeaponBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SwitchWeaponBase();

};
