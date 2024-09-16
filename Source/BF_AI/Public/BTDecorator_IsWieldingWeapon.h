#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "BTDecorator_IsWieldingWeapon.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsWieldingWeapon : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsWieldingWeapon();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_SwitchWeaponTask_WeaponType WeaponType;

};
