#pragma once
#include "CoreMinimal.h"
#include "IGS_AimAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_AimAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentAim;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AimInSpeedMult;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AimOutSpeedMult;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsAiming;

    BF_ANIMATIONS_API FIGS_AimAnimationInfo();
};
