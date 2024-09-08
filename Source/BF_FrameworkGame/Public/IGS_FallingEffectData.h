#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_FallingEffectData.generated.h"

class UMaterialInterface;

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_FallingEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> FadeOutScreenPostProcessMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float DurationToFadeOut;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxEffectPlayDuration;
    
    FIGS_FallingEffectData();
};

