#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "Animation/AnimTypes.h"
#include "EIGS_BoneAxis.h"
#include "EIGS_LocationOrScaleBoneAxis.h"
#include "IGS_MeshDeformationBoneInfo.generated.h"

USTRUCT()
struct FIGS_MeshDeformationBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;

    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneAxis> TargetBoneRotationAxis;

    UPROPERTY(EditAnywhere)
    EIGS_BoneAxis SourceBoneRotationAxis;

    UPROPERTY(EditAnywhere)
    FRotator TargetRotationOffset;

    UPROPERTY(EditAnywhere)
    float TargetBoneDebugRotationAlpha;

    UPROPERTY(EditAnywhere)
    EIGS_LocationOrScaleBoneAxis TargetBoneLocationAxis;

    UPROPERTY(EditAnywhere)
    float TargetBoneDebugLocationAlpha;

    UPROPERTY(EditAnywhere)
    EIGS_LocationOrScaleBoneAxis TargetBoneScaleAxis;

    UPROPERTY(EditAnywhere)
    float TargetBoneDebugScaleAlpha;

    BF_ANIMATIONS_API FIGS_MeshDeformationBoneInfo();
};
