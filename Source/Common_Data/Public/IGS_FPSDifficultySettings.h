#pragma once
#include "CoreMinimal.h"
#include "IGS_FPSDifficultySettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_FPSDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StealthDetectionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemySightRangeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemySightAngleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectorDetectionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectorRangeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrikeDelayMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OffenceReactionDelayMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnzippedTimeToFleeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnzippedTimeToFightBackMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyMeleeDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyThrowableCooldownMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerAntiCampProtectionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WaveManagerActionPhaseDurationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WaveManagerMaxSpawnedEnemiesAddition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PingMaxCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PingMaxDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxWeaponAmmoMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AmmoPickupSizeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HPRegenDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HPRegenSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownStateTimeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PinnedDownTimeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHPMultiplier;
    
    COMMON_DATA_API FIGS_FPSDifficultySettings();
};

