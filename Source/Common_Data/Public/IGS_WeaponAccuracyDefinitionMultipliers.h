#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponAccuracyDefinitionMultipliers.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAccuracyDefinitionMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrouchMult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementMult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpMult;

    FIGS_WeaponAccuracyDefinitionMultipliers();
};
