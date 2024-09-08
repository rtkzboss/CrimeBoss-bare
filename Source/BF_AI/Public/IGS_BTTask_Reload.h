#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_Reload.generated.h"

class AIGS_WeaponBase;

UCLASS()
class BF_AI_API UIGS_BTTask_Reload : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    AIGS_WeaponBase* Weapon;
    
public:
    UIGS_BTTask_Reload();

};

