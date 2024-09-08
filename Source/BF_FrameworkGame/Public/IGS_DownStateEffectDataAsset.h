#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DownStateEffectDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;
class UMaterialInterface;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_DownStateEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DownedEffectPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DyingEffectPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> ReviveEffectPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> DownedEffectWeightCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> DyingEffectWeightCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> ReviveEffectWeightCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectBakerDownedAkAudioEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectStartAkAudioEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectStopAkAudioEvent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkRtpc> EffectAkRtpc;
    
    UPROPERTY(EditAnywhere)
    float ReviveEffectDuration;
    
    UIGS_DownStateEffectDataAsset();

};

