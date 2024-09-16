#pragma once
#include "CoreMinimal.h"
#include "IGS_CommonModData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CommonModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HolsterTimeMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ADSTimeMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HipFireSpreadMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ADSSpreadMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpreadIncreasePerShotMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementSpreadMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VerticalRecoilMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HorizontalRecoilMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StabilityMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseDamageMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EffectiveRangeMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxRangeMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RPMMultiplier;

    FIGS_CommonModData();
};
