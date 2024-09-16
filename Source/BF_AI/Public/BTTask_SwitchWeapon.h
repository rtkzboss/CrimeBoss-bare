#pragma once
#include "CoreMinimal.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "BTTask_SwitchWeaponBase.h"
#include "BTTask_SwitchWeapon.generated.h"

UCLASS()
class BF_AI_API UBTTask_SwitchWeapon : public UBTTask_SwitchWeaponBase {
    GENERATED_BODY()
public:
    UBTTask_SwitchWeapon();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_SwitchWeaponTask_WeaponType WeaponTypeToSwitchTo;

};
