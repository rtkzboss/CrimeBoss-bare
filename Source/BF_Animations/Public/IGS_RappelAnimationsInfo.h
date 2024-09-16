#pragma once
#include "CoreMinimal.h"
#include "IGS_RappelAnimationsInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RappelAnimationsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsOnRappel;

    UPROPERTY(BlueprintReadOnly)
    bool ShouldRotateView;

    BF_ANIMATIONS_API FIGS_RappelAnimationsInfo();
};
