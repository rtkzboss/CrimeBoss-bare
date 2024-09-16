#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "IGS_AimAssistComponent.generated.h"

class AActor;
class UIGS_AimAssistConfigDataAsset;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AimAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AimAssistComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnTargetDestroyed(AActor* inDestroyedActor);

public:
    UFUNCTION(BlueprintPure)
    bool IsZoneScalingEnabledForSoftLock() const;

    UFUNCTION(BlueprintPure)
    bool IsZoneScalingEnabledForSlowdown() const;

    UFUNCTION(BlueprintPure)
    bool IsZoneScalingEnabledForBulletBending() const;

    UFUNCTION(BlueprintPure)
    bool IsSoftLockEnabled() const;

    UFUNCTION(BlueprintPure)
    bool IsSlowdownEnabled() const;

    UFUNCTION(BlueprintPure)
    bool IsBulletBendingEnabled() const;

    UFUNCTION(BlueprintPure)
    FTransform GetCurrentBulletBendingTransform() const;

    UFUNCTION(BlueprintPure)
    void GetControlMultipliers(float& outPitchMult, float& outYawMult) const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSlowdown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSoftLock;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableBulletBending;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableScaling;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScalingByResolution;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseResolutionForScaling;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScalingByFOV;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseFOVForScaling;

protected:
    UPROPERTY(EditAnywhere)
    bool bDrawCircles;

    UPROPERTY(EditAnywhere)
    bool bDrawCirclesOnlyWithValidTarget;

    UPROPERTY(EditAnywhere)
    bool bDrawCrosshair;

    UPROPERTY(EditAnywhere)
    bool bDebugOverlayBox;

    UPROPERTY(EditAnywhere)
    bool bShowValidTargetSockets;

    UPROPERTY(EditAnywhere)
    bool bDebugTargetTraces;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UIGS_AimAssistConfigDataAsset* MouseAimAssistDataAsset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UIGS_AimAssistConfigDataAsset* ControllerAimAssistDataAsset;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_AimAssistConfigDataAsset* CurrentAimAssistDataAsset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> ObstacleCheckTraceType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputDeviceChangedToGamepadDelay;

};
