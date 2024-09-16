#pragma once
#include "CoreMinimal.h"
#include "IGS_FPP_AnimationAdditive.generated.h"

USTRUCT(BlueprintType)
struct FIGS_FPP_AnimationAdditive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float MovementForwardSpeed;

    UPROPERTY(BlueprintReadOnly)
    float MovementSideSpeed;

    UPROPERTY(BlueprintReadOnly)
    float HorizontalAimSpeed;

    UPROPERTY(BlueprintReadOnly)
    float VerticalAimSpeed;

    UPROPERTY(BlueprintReadOnly)
    bool IsMoving;

    UPROPERTY(BlueprintReadOnly)
    bool IsShooting;

    BF_ANIMATIONS_API FIGS_FPP_AnimationAdditive();
};
