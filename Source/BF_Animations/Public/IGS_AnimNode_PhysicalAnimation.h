#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "IGS_AnimNode_PhysicalAnimation.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimNode_PhysicalAnimation : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink InputPose;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RelativeRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationRotationWeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLinearVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RagdollCurveValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnableGravityCurveTreshold;

    FIGS_AnimNode_PhysicalAnimation();
};
