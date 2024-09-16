#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_WeaponAccuracyDefinitionMultipliers.h"
#include "IGS_WeaponAccuracyDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAccuracyDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D HipFireSpread;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ADSSpread;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpreadFallTime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpreadPerShot;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ADSIdleSway;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponAccuracyDefinitionMultipliers Multipliers;

    FIGS_WeaponAccuracyDefinition();
};
