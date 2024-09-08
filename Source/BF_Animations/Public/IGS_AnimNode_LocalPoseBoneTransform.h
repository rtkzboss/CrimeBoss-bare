#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "IGS_AnimNode_LocalPoseBoneTransform.generated.h"

class UAnimInstance;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimNode_LocalPoseBoneTransform : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink InputPose;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    FName TransformPropertyName;
    
private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* m_CharacterMesh;
    
    UPROPERTY()
    UAnimInstance* m_AnimInsatnce;
    
public:
    FIGS_AnimNode_LocalPoseBoneTransform();
};

