#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_FlashlightSettingsDataAsset.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_FlashlightSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SpotIntensity;
    
    UPROPERTY(EditAnywhere)
    FColor SpotLightColor;
    
    UPROPERTY(EditAnywhere)
    float SpotAttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    float SpotOuterConeAngle;
    
    UPROPERTY(EditAnywhere)
    float SpotTemperature;
    
    UPROPERTY(EditAnywhere)
    float SpotVolumetricScatteringIntensity;
    
    UPROPERTY(EditAnywhere)
    float SpotLightFalloffExponent;
    
    UPROPERTY(EditAnywhere)
    float SpotShadowBias;
    
    UPROPERTY(EditAnywhere)
    float SpotShadowFilterSharpen;
    
    UPROPERTY(EditAnywhere)
    float PointIntensity;
    
    UPROPERTY(EditAnywhere)
    FColor PointLightColor;
    
    UPROPERTY(EditAnywhere)
    float PointAttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    float PointTemperature;
    
    UPROPERTY(EditAnywhere)
    float PointVolumetricScatteringIntensity;
    
    UPROPERTY(EditAnywhere)
    float PointLightFalloffExponent;
    
    UPROPERTY(EditAnywhere)
    float PointShadowBias;
    
    UPROPERTY(EditAnywhere)
    float PointShadowFilterSharpen;
    
    UIGS_FlashlightSettingsDataAsset();

};

