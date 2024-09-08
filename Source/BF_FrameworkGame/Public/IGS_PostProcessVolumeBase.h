#pragma once
#include "CoreMinimal.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "Engine/Scene.h"
#include "IGS_VolumeBase.h"
#include "IGS_PostProcessVolumeBase.generated.h"

class UMaterialInterface;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_PostProcessVolumeBase : public AIGS_VolumeBase, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> BlendableMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUnbound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPostProcessSettings Settings;
    
public:
    AIGS_PostProcessVolumeBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    virtual bool EncompassesPoint(FVector Point, float SphereRadius/*=0.f*/, float* OutDistanceToPoint) override { return false; }
    virtual FPostProcessVolumeProperties GetProperties() const override { return {}; }
};

