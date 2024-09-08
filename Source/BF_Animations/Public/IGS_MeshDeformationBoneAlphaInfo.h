#pragma once
#include "CoreMinimal.h"
#include "IGS_MeshDeformationBoneAlphaInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MeshDeformationBoneAlphaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> RotationAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> LocationAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> ScaleAlphas;
    
    BF_ANIMATIONS_API FIGS_MeshDeformationBoneAlphaInfo();
};

