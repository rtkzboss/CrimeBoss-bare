#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "IGS_AnimNode_PoseEffectorTarget.generated.h"

class UIGS_CharacterAnimInstance;
class UIGS_FootIKAnimInstance;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimNode_PoseEffectorTarget : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> EffectorTargers;

    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;

    UPROPERTY(EditAnywhere)
    float EffectorToGroundDistance;

    UPROPERTY(EditAnywhere)
    float EffectorProjectionPrecision;

    UPROPERTY(EditAnywhere)
    float FoootLocationToleranceFilter;

private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* m_CharacterMesh;

    UPROPERTY()
    UIGS_FootIKAnimInstance* m_FootIKAnimInstance;

    UPROPERTY()
    UIGS_CharacterAnimInstance* m_CharacterAniminstance;

public:
    FIGS_AnimNode_PoseEffectorTarget();
};
