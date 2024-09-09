#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SwitchWeaponCustom.generated.h"

class UIGS_MeleeWeaponInventoryObject;

UCLASS(BlueprintType)
class BF_AI_API UBTTask_SwitchWeaponCustom : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SwitchWeaponCustom();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_MeleeWeaponInventoryObject* WeaponDefinition;
    
};

