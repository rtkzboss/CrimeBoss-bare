#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AIAmmoWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.generated.h"

UCLASS(Abstract, BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AIPrimaryWeaponDef : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_AIAmmoWeaponDef Weapon;
    
    UIGS_AIPrimaryWeaponDef();

};

