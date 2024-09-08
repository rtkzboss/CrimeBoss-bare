#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "IGS_HasObjectStatusInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "DetectorBaseStateChangedEventDelegate.h"
#include "EIGS_DetectorState.h"
#include "EIGS_RotationType.h"
#include "IGS_DetectorTargetChangedDelegate.h"
#include "IGS_DetectorTeamSideChangedDelegate.h"
#include "IGS_DetectorBase.generated.h"

class AActor;
class AIGS_PlayerCharacter;
class AIGS_SentryControllerFramework;
class UDetectorRotation;
class UIGS_DamageHandlerComponentFramework;
class UIGS_ObjectStatus;
class USceneComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_DetectorBase : public APawn, public IGenericTeamAgentInterface, public IAISightTargetInterface, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_DetectorTeamSideChanged OnTeamSideChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDetectorBaseStateChangedEvent OnEnabledEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDetectorBaseStateChangedEvent OnDisabledEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDetectorBaseStateChangedEvent OnDetectorDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDetectorBaseStateChangedEvent OnDetectionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FDetectorBaseStateChangedEvent OnTargetDetectedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDetectorBaseStateChangedEvent OnDetectionFinished;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DetectorTargetChanged OnTargetChangedEvent;
    
    UPROPERTY()
    AIGS_SentryControllerFramework* DefaultController;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SquadID;
    
    UPROPERTY()
    TArray<AActor*> AllreadyReportedObjects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableOnAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeforeReenablingEventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeforeReenablingSoundTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_RotationType RotationType;
    
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    USceneComponent* RotationPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    USceneComponent* DetectionConeOrigin;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UDetectorRotation* DetectorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldMoveWhenNoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldRotateToHiddenTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D TimeToLoseTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisabledByEMP;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_DetectingPlayers)
    TArray<AIGS_PlayerCharacter*> mR_DetectingPlayers;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DamageHandlerComponentFramework* DamageHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TotalHorizontalRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TotalVerticalRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FullRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FollowRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PatrollingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ControlledRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_DetectorState)
    EIGS_DetectorState DetectorState;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnDetectionChanged)
    float mR_TargetDetection;
    
    UPROPERTY(ReplicatedUsing=OnRep_WTSatusChanged)
    EIGS_WalkieTalkieStatus mR_WalkieTalkieStatus;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnTargetChanged)
    AActor* mR_Target;
    
public:
    AIGS_DetectorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TempDisable(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamSideID(EIGS_TeamSideEnum inNewID);
    
protected:
    UFUNCTION()
    void OnRep_WTSatusChanged();
    
    UFUNCTION()
    void OnRep_OnTargetChanged();
    
    UFUNCTION()
    void OnRep_OnDetectionChanged(float inOldDetection);
    
    UFUNCTION()
    void OnRep_DetectorState(EIGS_DetectorState inOldState);
    
    UFUNCTION()
    void OnRep_DetectingPlayers();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectorStateChanged(EIGS_DetectorState inNewState);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CosmeticDetectorNearlyEnabled();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CosmeticDetectorEnabled();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CosmeticDetectorDisabled();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CosmeticDetectorDestroyed();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_CosmeticDetectorControlled();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_TeamSideEnum GetTeamSideId() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFocusPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze(float InTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableDetectorDelayed(AActor* inInstigator, float inDelay, bool inEnablingAfterEMP);
    
    UFUNCTION(BlueprintCallable)
    void EnableDetector(AActor* inInstigator, bool inEnablingAfterEMP);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableDetection(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableDetector(AActor* inInstigator, bool inDisabledByEMP);
    
public:
    UFUNCTION(BlueprintCallable)
    void Disable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyDetector(AActor* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticStartServoSound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticDetectorStateChanged(EIGS_DetectorState inNewState, EIGS_DetectorState inOldState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticDetectorNearlyEnabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticDetectorEnabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticDetectorDisabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticDetectorDestroyed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticDetectorControlled();
    

    // Fix for true pure virtual functions not being implemented
};

