#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "BoneContainer.h"
#include "Animation/AnimTypes.h"
#include "IGS_ModifyBonesInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ModifyBonesInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BonesToModify;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> TranslationMode;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> RotationMode;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> ScaleMode;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;

    BF_ANIMATIONS_API FIGS_ModifyBonesInfo();
};
