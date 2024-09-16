#pragma once
#include "CoreMinimal.h"
#include "IGS_VisibilityModData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_VisibilityModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFlashlight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsLaser;

    FIGS_VisibilityModData();
};
