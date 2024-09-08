#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "Animation/AnimTypes.h"
#include "IGS_ModifyBone_AnimGraphNode.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_ModifyBone_AnimGraphNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite)
    float Translation_X_Alpha;
    
    UPROPERTY(BlueprintReadWrite)
    float Translation_Y_Alpha;
    
    UPROPERTY(BlueprintReadWrite)
    float Translation_Z_Alpha;
    
    UPROPERTY(BlueprintReadWrite)
    float Rotation_Yaw_Alpha;
    
    UPROPERTY(BlueprintReadWrite)
    float Rotation_Pitch_Alpha;
    
    UPROPERTY(BlueprintReadWrite)
    float Rotation_Roll_Alpha;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;
    
    FIGS_ModifyBone_AnimGraphNode();
};

