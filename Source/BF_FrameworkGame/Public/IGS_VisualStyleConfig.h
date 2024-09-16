#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_VisualStyleConfig.generated.h"

USTRUCT(BlueprintType)
struct FIGS_VisualStyleConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOutlineOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutlineFadeOutStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutlineFadeOutDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutlineCustomDepthBleedTrough;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutlineCustomDepthOpacity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor OutlineColor;

    BF_FRAMEWORKGAME_API FIGS_VisualStyleConfig();
};
