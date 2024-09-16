#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponAccuracyInfoHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_WeaponAccuracyInfoHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FinalHalfAngleRad;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentSpreadHalfAngleRad;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseSpreadHalfAngleRad;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FullSpreadHalfAngleRad;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentMoveMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAiming;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsCrouching;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsJumping;

    FIGS_WeaponAccuracyInfoHolder();
};
