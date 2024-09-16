#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "IGS_ZonesScalingConfig.h"
#include "IGS_SlowdownConfig.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_SlowdownConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseStrengthCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SlowdownStrengthCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bZonesScalingEnabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_ZonesScalingConfig ZonesScalingConfig;

    FIGS_SlowdownConfig();
};
