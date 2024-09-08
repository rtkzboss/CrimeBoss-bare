#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactSettings.generated.h"

USTRUCT()
struct BF_IMPACTS_API FIGS_ImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DistanceSpawn;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideFallbackSettings;
    
    FIGS_ImpactSettings();
};

