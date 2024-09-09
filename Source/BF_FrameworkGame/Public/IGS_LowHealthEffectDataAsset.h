#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_LowHealthEffectDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;
class UMaterialInterface;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_LowHealthEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_LowHealthEffectDataAsset();

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> LowHealthPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> LowHealthCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectStartAkAudioEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectStopAkAudioEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkRtpc> EffectAkRtpc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AbsoluteLowHealthThreshold;
    
};

