#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_VisorEffectData.generated.h"

class UCurveFloat;
class UMaterialInterface;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_VisorEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CameraShakeIntensityBloodSplatter;
    
    UPROPERTY(EditAnywhere)
    float CameraShakeIntensityIncrementBloodSplatter;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> DrillSparksNiagaraSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float DrillSparksUpdateInterval;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DrillSparksScale;
    
    UPROPERTY(EditDefaultsOnly)
    float DrillSparksDefaultRelativeOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float DrillSparksMaxViewAngleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float MinDotToActivateSparks;
    
    UPROPERTY(EditDefaultsOnly)
    float SparksSpawnRate;
    
    UPROPERTY(EditDefaultsOnly)
    float SparksSpawnProbability;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SparksSpawnBoxRange;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 NumberOfTextures;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumFPS;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> EffectPreventionChannel;
    
    UPROPERTY(VisibleAnywhere)
    float StandardCurvesDuration;
    
    UPROPERTY(EditAnywhere)
    float VisorSmudgeFxDuration;
    
    UPROPERTY(EditAnywhere)
    float VisorSplatterFxDuration;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> ExplosionSmudgeEffectsPostProcessMaterial;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> BloodSplatterPostProcessMaterial;
    
    UPROPERTY(EditAnywhere)
    float ChanceToSpawnBloodSplatter;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> BloodSplatterWeightCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> ExplosionSmudgeWeightCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> ExplosionSmudgeDistanceFalloff;
    
    UPROPERTY(EditAnywhere)
    float SmudgesOverlapDistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float ShakeOverlapDistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float ShakeMuffledOverlapDistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float ShakeIntensity;
    
    UPROPERTY(EditAnywhere)
    float MuffledExplosionShakeMultiplier;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> ExplosionShakeDistanceIntensity;
    
    UPROPERTY(EditAnywhere)
    float BloodSplatterDistance;
    
    UPROPERTY(EditAnywhere)
    float DeadBodySplatterWaitSeconds;
    
    UPROPERTY(EditAnywhere)
    float DeadBodySplatterChancePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeToWaitAfterBloodSplatterShake;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeToWaitAfterExplosionShake;
    
    FIGS_VisorEffectData();
};

