#pragma once
#include "CoreMinimal.h"
#include "IGS_FIK_Crouching_Properties.generated.h"

USTRUCT()
struct FIGS_FIK_Crouching_Properties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LeftFoot_MaxRootBoneDistance;

    UPROPERTY(EditAnywhere)
    float LeftFoot_RootBoneOffsetAboveGround;

    UPROPERTY(EditAnywhere)
    float RightFoot_MaxRootBoneDistance;

    UPROPERTY(EditAnywhere)
    float RightFoot_RootBoneOffsetAboveGround;

    UPROPERTY(EditAnywhere)
    float MaxRootBoneOffsetWhileMoving;

    UPROPERTY(EditAnywhere)
    float MaxRootBoneOffsetWhileNotMoving;

    UPROPERTY(EditAnywhere)
    float MaxRootDistanceRange;

    BF_ANIMATIONS_API FIGS_FIK_Crouching_Properties();
};
