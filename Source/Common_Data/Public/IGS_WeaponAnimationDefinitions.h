#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponAnimationDefinitions.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAnimationDefinitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoCombatEmptyReloadTime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmptyReloadTime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoCombatReloadTime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReloadTime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ADSInSpeedMult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ADSOutSpeedMult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScopeInPercent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ADSMovementSpeedMultiplier;

    FIGS_WeaponAnimationDefinitions();
};
