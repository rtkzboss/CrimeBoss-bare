#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_StimshotEffectDataAsset.generated.h"

class UAkAudioEvent;
class UCurveFloat;
class UMaterialInterface;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_StimshotEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> CombatStimshotPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> CombatStimshotStartPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> StaminaStimshotPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> StaminaStimshotStartPostProcessInterface;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> StimshotStartWeightCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StimshotEndAkAudioEvent;
    
    UPROPERTY(EditAnywhere)
    float EffectFadeDuration;
    
    UPROPERTY(EditAnywhere)
    float EffectStartDuration;
    
    UIGS_StimshotEffectDataAsset();

};

