#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "ScalableFloat.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_StealthSettings.generated.h"

class UNavigationQueryFilter;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_StealthSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultDetectionUpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpMuliplierCiv;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionConeMaxDistanceCiv;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionHalfAngleDegCiv;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpMuliplierEmployee;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionConeMaxDistanceEmployee;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionHalfAngleDegEmployee;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpFirstStageMultiplierGuard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpSecondStageMultiplierGuard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionConeMaxDistanceGuard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionHalfAngleDegGuard;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval OffenceReactionDelayPlayerGuard;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval OffenceReactionDelayActorGuard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpFirstStageMultiplierCop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpSecondStageMultiplierCop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionConeMaxDistanceCop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionHalfAngleDegCop;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval OffenceReactionDelayPlayerCop;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval OffenceReactionDelayActorCop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpFirstStageMultiplierGangster;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionUpSecondStageMultiplierGangster;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionConeMaxDistanceGangster;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionHalfAngleDegGangster;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval OffenceReactionDelayPlayerGangster;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval OffenceReactionDelayActorGangster;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionDownTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrouchDetectionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SprintDetectionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DistanceDetectionSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve AngleDetectionSpeedCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BotDetectionMuliplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CombatStateDetectionMuliplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FootstepDetectionMuliplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraDetectionUpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraDetectionDownTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraDetectionPlayerIdleCoef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionIncreaseThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectedCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DetectionMidPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseFootstepDetection;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval HQSuspcionDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval HQSuspcionStartValue;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval HQSuspcionStrikeIncrease;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval HQSuspcionStrikeDecrease;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval HQSuspcionAdditionalOffenceIncrease;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StrikeAddedCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CivEscapedDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CivEscapedStrikes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TEnumAsByte<EPhysicalSurface>> SurfacesImpactBlackList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat ShoutCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat StealthRangedDamageMult;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat StealthTakedownRangeMult;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScalableFloat StealthTakedownDamageMult;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> ZiptieNavigationFilter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxFollowerCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeToForgetTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VisionCapsuleRadius;
    
public:
    UIGS_StealthSettings();

};

