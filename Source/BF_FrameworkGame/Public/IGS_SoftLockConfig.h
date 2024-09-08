#pragma once
#include "CoreMinimal.h"
#include "IGS_ZonesScalingConfig.h"
#include "IGS_SoftLockConfig.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_SoftLockConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoftLockZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LockStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeWithoutStickInputToDisableSoftLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StickInputDeadzoneForSoftLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrengthDecayStartPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bZonesScalingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_ZonesScalingConfig ZonesScalingConfig;
    
    FIGS_SoftLockConfig();
};

