#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "IGS_FAnimNode_BoneSpring.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FAnimNode_BoneSpring : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference SpringBone;
    
    UPROPERTY(EditAnywhere)
    bool bLimitDisplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDisplacement;
    
    UPROPERTY(EditAnywhere)
    float SpringStiffness;
    
    UPROPERTY(EditAnywhere)
    float SpringDamping;
    
    UPROPERTY(EditAnywhere)
    float ErrorResetThresh;
    
    UPROPERTY()
    bool bNoZSpring_DEPRECATED;
    
    UPROPERTY(EditAnywhere)
    bool bTranslateX;
    
    UPROPERTY(EditAnywhere)
    bool bTranslateY;
    
    UPROPERTY(EditAnywhere)
    bool bTranslateZ;
    
    UPROPERTY(EditAnywhere)
    bool bRotateX;
    
    UPROPERTY(EditAnywhere)
    bool bRotateY;
    
    UPROPERTY(EditAnywhere)
    bool bRotateZ;
    
    FIGS_FAnimNode_BoneSpring();
};

