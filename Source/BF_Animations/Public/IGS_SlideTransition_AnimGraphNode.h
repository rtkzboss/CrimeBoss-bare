#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "IGS_SlideTransition_AnimGraphNode.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_SlideTransition_AnimGraphNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SlidingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Angle;
    
    FIGS_SlideTransition_AnimGraphNode();
};

