#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "EIGS_DebugBoneAxisTypes.h"
#include "EIGS_DebugBoneTextTransformSpaceFormat.h"
#include "IGS_AnimNode_BoneInfoDebug.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimNode_BoneInfoDebug : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink InputPose;

    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> Bones;

    UPROPERTY(EditAnywhere)
    EIGS_DebugBoneAxisTypes DebugBoneAxisType;

    UPROPERTY(EditAnywhere)
    bool DisplayBoneInfo;

    UPROPERTY(EditAnywhere)
    EIGS_DebugBoneTextTransformSpaceFormat DisplayTransformSpace;

    UPROPERTY(EditAnywhere)
    float ArrowSize;

    UPROPERTY(EditAnywhere)
    float ArrowThickness;

    FIGS_AnimNode_BoneInfoDebug();
};
