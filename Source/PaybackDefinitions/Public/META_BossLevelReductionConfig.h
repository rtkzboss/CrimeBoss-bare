#pragma once
#include "CoreMinimal.h"
#include "META_BossLevelReductionConfig.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BossLevelReductionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinBossLevelForReduction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinSuccessfulMissionsForNoReduction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPlotlineProgressInPlotlineModeForNoReduction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinReduction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ReductionCurve;

    FMETA_BossLevelReductionConfig();
};
