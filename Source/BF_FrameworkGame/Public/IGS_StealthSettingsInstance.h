#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Curves/CurveFloat.h"
#include "IGS_StealthSettingsInstance.generated.h"

class UIGS_StealthSettings;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_StealthSettingsInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UIGS_StealthSettings* StealthSettings;
    
    UIGS_StealthSettingsInstance();

    UFUNCTION(BlueprintPure)
    float GetVisionHalfAngleDegGuard() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionHalfAngleDegGangster() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionHalfAngleDegEmployee() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionHalfAngleDegCop() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionHalfAngleDegCiv() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionConeMaxDistanceGuard() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionConeMaxDistanceGangster() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionConeMaxDistanceEmployee() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionConeMaxDistanceCop() const;
    
    UFUNCTION(BlueprintPure)
    float GetVisionConeMaxDistanceCiv() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseFootstepDetection() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrikeAddedCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetStealthTakedownRangeMult() const;
    
    UFUNCTION(BlueprintPure)
    float GetStealthTakedownDamageMult() const;
    
    UFUNCTION(BlueprintPure)
    float GetStealthRangedDamageMult() const;
    
    UFUNCTION(BlueprintPure)
    float GetSprintDetectionMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSniperVisionCapsuleRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetSniperTimeToForgetTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetShoutCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetOffenceReactionDelayPlayerGuard() const;
    
    UFUNCTION(BlueprintPure)
    float GetOffenceReactionDelayPlayerGangster() const;
    
    UFUNCTION(BlueprintPure)
    float GetOffenceReactionDelayPlayerCop() const;
    
    UFUNCTION(BlueprintPure)
    float GetOffenceReactionDelayActorGuard() const;
    
    UFUNCTION(BlueprintPure)
    float GetOffenceReactionDelayActorGangster() const;
    
    UFUNCTION(BlueprintPure)
    float GetOffenceReactionDelayActorCop() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxFollowerCount() const;
    
    UFUNCTION(BlueprintPure)
    float GetFootstepDetectionMuliplier() const;
    
    UFUNCTION(BlueprintPure)
    FRuntimeFloatCurve GetDistanceDetectionSpeedCurve() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpSecondStageMultiplierGuard() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpSecondStageMultiplierGangster() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpSecondStageMultiplierCop() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpMuliplierEmployee() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpMuliplierCiv() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpFirstStageMultiplierGuard() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpFirstStageMultiplierGangster() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionUpFirstStageMultiplierCop() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionMidPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionIncreaseThreshold() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectionDownTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetDetectedCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultDetectionUpTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrouchDetectionMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetCombatStateDetectionMuliplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCivEscapedStrikeCount() const;
    
    UFUNCTION(BlueprintPure)
    float GetCivEscapedDelay() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraDetectionUpTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraDetectionPlayerIdleCoef() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraDetectionDownTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetBotDetectionMuliplier() const;
    
    UFUNCTION(BlueprintPure)
    FRuntimeFloatCurve GetAngleDetectionSpeedCurve() const;
    
};

