#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactSettings.h"
#include "IGS_SoundImpactSettings.generated.h"

class UAkAudioEvent;

USTRUCT()
struct BF_IMPACTS_API FIGS_SoundImpactSettings : public FIGS_ImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> AkAudioEventPath;
    
    UPROPERTY(EditAnywhere)
    float SoundMaxLength;
    
    FIGS_SoundImpactSettings();
};

