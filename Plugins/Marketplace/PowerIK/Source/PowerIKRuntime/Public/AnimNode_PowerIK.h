#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "PowerIKBodyInertia.h"
#include "PowerIKBoneBendDirection.h"
#include "PowerIKBoneLimit.h"
#include "PowerIKCenterOfGravity.h"
#include "PowerIKEffector.h"
#include "PowerIKExcludedBone.h"
#include "AnimNode_PowerIK.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FAnimNode_PowerIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName CharacterRoot;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RootRotationMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerIKBodyInertia BodyInertia;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPowerIKBoneBendDirection> BendDirections;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPowerIKExcludedBone> ExcludedBones;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPowerIKBoneLimit> JointLimits;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPowerIKEffector> Effectors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothingMaxSpeedMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothingMaxDistanceMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerIKCenterOfGravity CenterOfGravityConstraint;

    UPROPERTY(EditAnywhere)
    int32 MaxSquashIterations;

    UPROPERTY(EditAnywhere)
    int32 MaxStretchIterations;

    UPROPERTY(EditAnywhere)
    int32 MaxFinalIterations;

    UPROPERTY(EditAnywhere)
    bool AllowBoneTranslation;

    UPROPERTY(EditAnywhere)
    float SolverAlpha;

    UPROPERTY(EditAnywhere)
    float DebugDrawSize;

    FAnimNode_PowerIK();
};
