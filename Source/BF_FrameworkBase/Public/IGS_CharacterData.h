#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EIGS_AIMontageType.h"
#include "EIGS_AlarmDeviceType.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_CarType.h"
#include "EIGS_CoverAttackSide.h"
#include "EIGS_PushForTarget.h"
#include "EIGS_RoomSecurityType.h"
#include "EIGS_RoomType.h"
#include "EIGS_TargetProximity.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "CharDetectingPlayersChangedEventDelegate.h"
#include "IGS_BumpIntoSignatureDelegate.h"
#include "IGS_FloatChangedSignatureDelegate.h"
#include "IGS_IsChargingChangedDelegate.h"
#include "IGS_IsTargetChangedSignatureDelegate.h"
#include "IGS_OnNavlinkChangedSignatureDelegate.h"
#include "IGS_PanicChangedSignatureDelegate.h"
#include "IGS_PanicStateChangedSignatureDelegate.h"
#include "IGS_RoomTypeChangedSignatureDelegate.h"
#include "IGS_SecurityTierChangedSignatureDelegate.h"
#include "ShoutScanData.h"
#include "IGS_CharacterData.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_RoomFramework;
class UObject;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_CharacterData : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_IsTargetChangedSignature OnIsTargetChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_SecurityTierChangedSignature OnSecurityTierChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_RoomTypeChangedSignature OnRoomTypeChangedBP;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsInCombat;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bWasEverLooting;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PanicChangedSignature OnZiptieChanged;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TargetFirstSeenTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TargetLostTime;
    
    UPROPERTY(BlueprintReadWrite, Replicated, VisibleAnywhere)
    AActor* VisibleTarget;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* AggroTarget;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* LastTarget;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* TraceTarget;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DistanceToTargetOnNavmesh;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool NeedHideFromGuard;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_TargetProximity TargetProximity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float EnteringDistanceProximity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_TargetProximity ProximityForEnteringDistanceProximity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_RoomFramework* CurrRoom;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_SecurityLocation)
    EIGS_RoomSecurityType CurrentSecurityLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_RoomType CurrentRoomType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentRoomIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CoverExpirationTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool HasValidCover;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CoverInvalidateTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UObject* CurrentCover;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UObject* LastCover;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsInsideValidCover;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EIGS_CoverAttackSide CoverAttackSide;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 CharacterID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool SniperShouldHit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool HasEverMoved;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsMovingWithSprint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsTryingToSurprisePlayer;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsTriggeredByBumping;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnNavlinkChangedSignature OnNavlinkChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnNavlinkChangedSignature OnTraversingNavlinkChanged;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* FollowActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FollowActorDistance;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PanicChangedSignature OnIsOnGroundChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PanicStateChangedSignature OnPanicChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_BumpIntoSignature OnCharacterAboutToBump;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_BumpIntoSignature OnBumpInto;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    bool mR_HasReactionEnabledByScript;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_FloatChangedSignature OnEnemyDetectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCharDetectingPlayersChangedEvent OnDetectingPlayersChangedEvent;
    
    UPROPERTY()
    TArray<AActor*> m_PlayersDetectingActors;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    EIGS_AIMontageType InjuryPlaying;
    
    UPROPERTY(Instanced)
    UActorComponent* ThrowRequestComponent;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 IsDefending: 1;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PanicStateChangedSignature OnHintShout;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PanicStateChangedSignature OnSubdueTargetChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PanicStateChangedSignature OnStealthKillChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PanicStateChangedSignature OnPlayerCanBreakChanged;
    
    UPROPERTY(Replicated)
    bool bIsCharging;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_IsChargingChanged OnIsChargingChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    bool isTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    EIGS_PushForTarget PushForTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<UObject*> FireLocks;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<UObject*> NearVanLocks;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<UObject*> ReactionLocks;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<UObject*> ShootingRotationLocks;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<UObject*> BotSwitchLocks;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    EIGS_CarType m_CarType;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    EIGS_CarSeatVariant m_SeatVariant;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector m_LastNavmeshLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsOnNavlink;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsTraversingNavlink;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, ReplicatedUsing=OnRep_OnZiptieChanged)
    bool bR_IsZiptied;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bCanAbortAnimation;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_IsPanicking)
    uint8 bIsPanicking: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 bWasEverPanicking: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 bIsComplaining: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 bIsAlerting: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 bDuty: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 bGetDownKneel: 1;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_GoingToGroundChanged)
    uint8 bGoingToGround: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 bScared: 1;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_IsOnGroundChanged)
    uint8 bIsLayingOnGround: 1;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_EscapingChanged)
    uint8 bIsEscaping: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 bIsRunningForAlarmDevice: 1;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    EIGS_AlarmDeviceType AlarmDeviceType;
    
    UPROPERTY(VisibleAnywhere)
    bool m_DutyAlertingCharacter;
    
    UPROPERTY(VisibleAnywhere)
    bool bAlreadyUsedAlarmDevice;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_StickyChanged)
    uint8 bIsSticky: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool SpawnedByWaveManager;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<UObject*> InvalidTargetLocks;
    
    UPROPERTY(ReplicatedUsing=OnRep_WalkieTalkieStatus)
    EIGS_WalkieTalkieStatus mR_WalkieTalkieStatus;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnDetectionChanged)
    float mR_CurrentDetection;
    
    UPROPERTY(ReplicatedUsing=OnRep_DetectionSecondPhase)
    bool mR_DetectionSecondPhase;
    
    UPROPERTY(ReplicatedUsing=OnRep_DetectingPlayers)
    TArray<AIGS_GameCharacterFramework*> mR_DetectingPlayers;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnReportDetectionChanged)
    bool mR_ReportDetection;
    
    UPROPERTY(Export, Transient)
    TSet<UPrimitiveComponent*> ChokeSpaces;
    
    UPROPERTY()
    FShoutScanData m_ShoutScanData;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* m_SubdueTargetCharacter;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* m_SubdueTargetCharacterCached;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    uint8 mR_SubdueAllowed: 1;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnRevivingChanged)
    bool mR_Reviving;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnLockPickingChanged)
    bool mR_LockPicking;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnInspectingChanged)
    bool mR_Inspecting;
    
public:
    UIGS_CharacterData(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void UpdateIsCharging(bool inIsCharging);
    
protected:
    UFUNCTION()
    void OnRep_WalkieTalkieStatus();
    
    UFUNCTION()
    void OnRep_StickyChanged();
    
public:
    UFUNCTION()
    void OnRep_SecurityLocation(EIGS_RoomSecurityType inOldTier);
    
protected:
    UFUNCTION()
    void OnRep_OnZiptieChanged();
    
    UFUNCTION()
    void OnRep_OnRevivingChanged();
    
    UFUNCTION()
    void OnRep_OnReportDetectionChanged();
    
    UFUNCTION()
    void OnRep_OnLockPickingChanged();
    
    UFUNCTION()
    void OnRep_OnInspectingChanged();
    
    UFUNCTION()
    void OnRep_OnDetectionChanged();
    
    UFUNCTION()
    void OnRep_IsPanicking();
    
    UFUNCTION()
    void OnRep_IsOnGroundChanged();
    
    UFUNCTION()
    void OnRep_GoingToGroundChanged();
    
    UFUNCTION()
    void OnRep_EscapingChanged();
    
    UFUNCTION()
    void OnRep_DetectionSecondPhase();
    
    UFUNCTION()
    void OnRep_DetectingPlayers();
    
    UFUNCTION()
    void OnComponentEndOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inOtherComponent, int32 ini);
    
    UFUNCTION()
    void OnComponentBeginOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inOtherComponent, int32 ini, bool inArg, const FHitResult& inHitResult);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetSeatVariant(const EIGS_CarSeatVariant inSeatVariant);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetCarType(const EIGS_CarType inCarType);
    
    UFUNCTION(BlueprintCallable)
    bool IsShoutHint();
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetSubduedBy() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetStealthTakedownActor();
    
    UFUNCTION(BlueprintCallable)
    bool GetStealthKill();
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerCanBreak();
    
    UFUNCTION(BlueprintPure)
    FVector GetLastNavmeshLocation() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> GetDetectingPlayers() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetCharacterOwner() const;
    
};

