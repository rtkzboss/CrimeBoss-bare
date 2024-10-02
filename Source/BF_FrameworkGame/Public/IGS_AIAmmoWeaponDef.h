#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIWeaponDef.h"
#include "IGS_AIAmmoWeaponDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIAmmoWeaponDef : public FIGS_AIWeaponDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseTimeSetup;

    UPROPERTY(EditAnywhere)
    float MaxFiringRange;

    UPROPERTY(EditAnywhere)
    FFloatInterval CombatRange;

    UPROPERTY(EditAnywhere)
    FInt32Interval ShotsToFire;

    UPROPERTY(EditAnywhere)
    FInt32Interval ShotsToFireSpray;

    UPROPERTY(EditAnywhere)
    FInt32Interval AmmoUsedUntilReload;

    UPROPERTY(EditAnywhere)
    FFloatInterval TimeToFire;

    UPROPERTY(EditAnywhere)
    FFloatInterval TimeToFireSpray;

    UPROPERTY(EditAnywhere)
    FFloatInterval TimeUntilReload;

    UPROPERTY(EditAnywhere)
    FFloatInterval AfterFireCooldown;

    UPROPERTY(EditAnywhere)
    FFloatInterval AfterFireCooldownCover;

    FIGS_AIAmmoWeaponDef();
};
