#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "IGS_ZonesScalingConfig.h"
#include "IGS_BulletBendingConfig.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_BulletBendingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinStartRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxStartRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFullPowerRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFullPowerRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HipFireZoneScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseInterpolationCurve;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve InterpolationCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bZonesScalingEnabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_ZonesScalingConfig ZonesScalingConfig;

    FIGS_BulletBendingConfig();
};
