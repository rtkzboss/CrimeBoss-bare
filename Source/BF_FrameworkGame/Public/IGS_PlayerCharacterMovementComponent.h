#pragma once
#include "CoreMinimal.h"
#include "IGS_GameCharacterMovementComponent.h"
#include "IGS_BotMovementOverride.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerCharacterMovementComponent.generated.h"

class AIGS_PlayerCharacter;
class UCameraShakeBase;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;
class UIGS_AdvancedMovementData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerCharacterMovementComponent : public UIGS_GameCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_AdvancedMovementData* AdvancedMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAnalogValueForSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintOutInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReloadToShootInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlideRequiredSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlideCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlideLookTurnLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SlideLookTurnDotLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SlideCameraDirToVelocityMaxDot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGameplayAbility> MantleAbility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceToMantle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxMantleHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxMantleAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinMantleHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MantleDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveVector* LerpCurveVector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* LerpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LadderGrabFromTopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LadderBottomFaceAlignSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LadderBottomStepAlignSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LadderTopPointInterpAlignSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LadderLeaveRM_StartTopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRappelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRappelAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RappelLookTurnLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float RappelLookTurnDotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RappelForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSlideOnZiplineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSlideOnZiplineAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZiplineLookTurnLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ZiplineLookTurnDotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShakeBase> RappelCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraShakeScaleLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_BotMovementOverride BotMovementOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TWeakObjectPtr<AIGS_PlayerCharacter> m_OwningPlayer;
    
public:
    UIGS_PlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopUsingBuzzsaw();
    
    UFUNCTION(BlueprintCallable)
    void StartUsingBuzzsaw();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LadderEnterInterpolationClientSyncPoint();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_LadderTopEnterInterpolationFinished();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_LadderBottomEnterStage2InterpolationFinished();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_LadderBottomEnterStage1InterpolationFinished();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_BotSlideOnZiplineStarted();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_BotSlideOnZiplineEnded();
    
};

