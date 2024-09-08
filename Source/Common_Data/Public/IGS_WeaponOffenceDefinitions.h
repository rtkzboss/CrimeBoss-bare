#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponOffenceDefinitions.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponOffenceDefinitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShotLoudness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ImpactLoudness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FireOffenceDelay;
    
    FIGS_WeaponOffenceDefinitions();
};

