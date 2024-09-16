#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "IGS_CarWheels_AnimGraphNode.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_CarWheels_AnimGraphNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> Wheels;

    UPROPERTY(EditAnywhere)
    FBoneReference SuspenssionRoot;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelsRadius;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FrontWheelsAngle;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelsSpeed;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChassisSideRotation;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelSpacing;

private:
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* m_SkeletalMesh;

public:
    FIGS_CarWheels_AnimGraphNode();
};
