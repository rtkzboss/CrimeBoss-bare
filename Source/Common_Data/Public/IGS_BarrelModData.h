#pragma once
#include "CoreMinimal.h"
#include "IGS_BarrelModData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_BarrelModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsSuppressor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UParticleSystem> MuzzleFlashParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UParticleSystem> MuzzleFlashTortillaParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MuzzleFlashStimuliMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShotSoundStimuliMultiplier;
    
    FIGS_BarrelModData();
};

