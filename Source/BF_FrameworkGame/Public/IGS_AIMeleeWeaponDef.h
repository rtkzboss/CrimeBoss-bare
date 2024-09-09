#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AIMeleeDef.h"
#include "IGS_AIMeleeWeaponDef.generated.h"

UCLASS(Abstract, BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AIMeleeWeaponDef : public UObject {
    GENERATED_BODY()
public:
    UIGS_AIMeleeWeaponDef();

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_AIMeleeDef Weapon;
    
};

