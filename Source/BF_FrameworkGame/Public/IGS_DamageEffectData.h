#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_DamageEffectData.generated.h"

class UAkAudioEvent;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FIGS_DamageEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> EffectPostProcess;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkAudioEvent> HitAkAudioEvent;
    
    UPROPERTY(EditAnywhere)
    float HitPowerMultiplier;
    
    UPROPERTY(EditAnywhere)
    float EffectDuration;
    
    UPROPERTY(EditAnywhere)
    float MinimalEffectDamage;
    
    UPROPERTY(EditAnywhere)
    float MaximumEffectDamage;
    
    BF_FRAMEWORKGAME_API FIGS_DamageEffectData();
};

