#pragma once
#include "CoreMinimal.h"
#include "IGS_AIThrowableWeaponDef.generated.h"

class UIGS_ThrowableInventoryObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIThrowableWeaponDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UIGS_ThrowableInventoryObject> ThrowableWeapon;

    UPROPERTY(EditAnywhere)
    int32 Chance;

    UPROPERTY(VisibleAnywhere)
    float NormalizedChance;

    UPROPERTY(EditAnywhere)
    float ThrowableCooldown;

    UPROPERTY(EditAnywhere)
    float GlobalCooldown;

    FIGS_AIThrowableWeaponDef();
};
