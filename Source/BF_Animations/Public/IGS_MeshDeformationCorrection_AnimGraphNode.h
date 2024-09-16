#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "IGS_MeshDeformationBoneAlphaInfo.h"
#include "IGS_MeshDeformationBoneInfo.h"
#include "IGS_MeshDeformationCorrection_AnimGraphNode.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_MeshDeformationCorrection_AnimGraphNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FIGS_MeshDeformationBoneInfo> CorrectionData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_MeshDeformationBoneAlphaInfo Alphas;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseExposedAlpha;

protected:
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* m_CharacterMesh;

public:
    FIGS_MeshDeformationCorrection_AnimGraphNode();
};
