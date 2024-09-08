#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_MovementSlope.h"
#include "EIGS_Speed.h"
#include "IGS_LadderGrabStartedSignatureDelegate.h"
#include "IGS_LadderLeaveSignatureDelegate.h"
#include "IGS_MovementSpeedDynamicSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameCharacterMovementComponent.generated.h"

class UGameplayEffect;
class UObject;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_GameCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseDafultUnrealRotation_TMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeNoCrouchAI;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SlopeNormalized;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SlopeNormalizedNormal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SlopeNoCrouchAINormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeCheckDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SlopeBufferCapacity;
    
    UPROPERTY(EditAnywhere)
    float SlideDuration;
    
    UPROPERTY(EditAnywhere)
    float SlideSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SlideSlowdownThreshold;
    
    UPROPERTY(EditAnywhere)
    float SlideSpeedFalloff;
    
    UPROPERTY(EditAnywhere)
    float StopSlideSpeed;
    
    UPROPERTY(EditAnywhere)
    float SlideLookTurnMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SlideLowerBodyMultiplier;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsInLocomotionState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MovementSlope FootStepWalkType;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MovementSpeedDynamicSignature OnMovementSpeedChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_LadderGrabStartedSignature OnLadderGrabStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_LadderLeaveSignature OnLadderLeaveFinished;
    
protected:
    UPROPERTY()
    TSubclassOf<UGameplayEffect> MoveSpeedMultiplierGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CalmWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CalmRunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CalmSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertedWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertedRunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertedSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CombatWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CombatRunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CombatSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZiptiedSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownstateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrouchCoef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrouchMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InjuredCoef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InjuredMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StairsCoefUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StairsCoefDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BackwardsCoefPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BackwardsCoef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimDownSightsCoef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BagCoef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarryingSprintCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LerpMaxDistance;
    
    UPROPERTY()
    float SpeedWalkSlow;
    
    UPROPERTY()
    float SpeedWalkFast;
    
    UPROPERTY()
    float SpeedRunSlow;
    
    UPROPERTY()
    float SpeedRunFast;
    
    UPROPERTY()
    float SpeedSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCharacterSpeed;
    
    UPROPERTY(VisibleAnywhere)
    bool m_IsInWater;
    
    UPROPERTY(EditDefaultsOnly)
    EIGS_Speed DefaultMovementSpeed;
    
    UPROPERTY(VisibleAnywhere)
    EIGS_Speed m_MovementSpeed;
    
    UPROPERTY(VisibleAnywhere)
    float MoveSpeedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float SprintSpeedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float CrouchSpeedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float CarryingSpeedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float ADSMovementSpeedMultiplierAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float PerWeaponADSMovementSpeedMultiplier;
    
    UPROPERTY(VisibleAnywhere)
    float PerWieldableMovementSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bCreateDynamicObstacle;
    
    UPROPERTY(EditAnywhere)
    float SpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float ObstacleCreationDelay;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastGroundedLocation;
    
public:
    UIGS_GameCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSlidingOnZipline();
    
    UFUNCTION(BlueprintCallable)
    void StartRappelling();
    
    UFUNCTION(BlueprintCallable)
    void SlideOnZipline(const FVector& inStartLocation, const FVector& inEndLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeed(EIGS_Speed inMovementSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaning(EIGS_CharacterLeaningDirectionEnum InDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMantling(bool inIsMantling);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMovementSpeedMultiplier(UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    void OnStartedFalling();
    
    UFUNCTION(BlueprintCallable)
    void OnLanded();
    
    UFUNCTION(BlueprintPure)
    bool IsUsingBuzzsaw() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSlidingOnZipline() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSlideInCooldown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRappelling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartiallyInWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnRope() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnLadder() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMantling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeaning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInVentShaft() const;
    
    UFUNCTION(BlueprintPure)
    float GetWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetSprintSpeed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldRotateView() const;
    
    UFUNCTION(BlueprintPure)
    float GetMovementSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_Speed GetMovementSpeed() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_CharacterLeaningDirectionEnum GetLeaningDirection() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastGroundedLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetFullRunSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAdvancedMoveInteractionLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAdvancedMoveForwardDir() const;
    
    UFUNCTION(BlueprintPure)
    bool CanMoveOnLadder() const;
    
    UFUNCTION(BlueprintCallable)
    void AddMovementSpeedMultiplier(UObject* Owner, float Multiplier);
    
};

