#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "IGS_AnimNode_PoseBoneTransform.generated.h"

class UAnimInstance;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimNode_PoseBoneTransform : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
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
    FIGS_AnimNode_PoseBoneTransform();
};

