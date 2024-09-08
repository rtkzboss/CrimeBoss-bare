#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "IGS_PoolableInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "EIGS_VehicleSplineGroup.h"
#include "VehicleOnDespawnDelegate.h"
#include "VehicleOnSpawnGroupUpdatedDelegate.h"
#include "VehiclePassengersSpawnedDelegate.h"
#include "VehicleStateChangedDelegate.h"
#include "IGS_VehicleBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_VehicleDestinationPoint;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UIGS_InteractiveComponent;
class UIGS_TrafficPathComponent;
class UIGS_VehiclePathFollowerComponent;
class UPFPathFollowerComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Config=Inherit)
class BF_AI_API AIGS_VehicleBase : public AActor, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool isEscaping;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsEscapeVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FVehiclePassengersSpawned OnPassengersSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleOnDespawn OnVehicleDespawn;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleStateChanged OnDriveStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleStateChanged OnRabbitFinished;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleStateChanged OnDriveFinishedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleStateChanged OnLeavedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleOnSpawnGroupUpdated OnSpawnGroupUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PassengersGetOutAfterDriveFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnCustomPassengers;
    
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval Speed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStartIdleOnBeginPlay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DriveAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* BrakeAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* IdleAkEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* VehicleTypeAkSwitchValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* VehicleMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_VehiclePathFollowerComponent* FollowerComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_Color)
    FColor mR_Color;
    
    UPROPERTY(BlueprintReadOnly)
    EIGS_VehicleSplineGroup m_VehilceGroup;
    
    UPROPERTY(Replicated)
    bool bIsDriving;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsLeaving;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanSpawnPassengers;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PassengerCount;
    
    UPROPERTY(Instanced)
    TArray<UIGS_TrafficPathComponent*> m_Path;
    
    UPROPERTY()
    FIGS_NoSpawnPointDefinition CustomPassengersDefinition;
    
    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> endMissionInteractiveComponents;
    
public:
    AIGS_VehicleBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateEscapeInteractions(bool inIsObjectiveCompleted, float inHoldTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartEscapeSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartDrive(TArray<UIGS_TrafficPathComponent*> InPath);
    
    UFUNCTION(BlueprintCallable)
    void SetPassengerCount(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPassengersDefinition(const FIGS_NoSpawnPointDefinition& inCustomPassengersDefinition, bool bInForceFilled);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeAutoPinged(const bool InValue);
    
    UFUNCTION(Reliable, Server)
    void Server_SetColor(FColor InColor);
    
    UFUNCTION(Reliable, Server)
    void Server_FinishDrive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterEndMissionInteractions(TArray<UIGS_InteractiveComponent*> inInteractiveComponents);
    
    UFUNCTION()
    void PlayerHealthStateChanged(EIGS_HealthState inState);
    
    UFUNCTION()
    void OnSegmentFinished(UPFPathFollowerComponent* inFollower);
    
    UFUNCTION()
    void OnRep_Color() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDriveStarted();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDriveFinished();
    
    UFUNCTION()
    void OnCharactersSpawned(const TArray<AIGS_GameCharacterFramework*>& inCharacters);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangePingedStatusEvent(const bool inPinged);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multi_SetAudio(UAkAudioEvent* inNewAudio);
    
    UFUNCTION(BlueprintCallable)
    void Leave();
    
    UFUNCTION(BlueprintCallable)
    void GoToDestination(AIGS_VehicleDestinationPoint* inDestinationPoint, bool& outPathFound);
    
    UFUNCTION(BlueprintPure)
    EIGS_VehicleSpawnGroup GetVehicleSpawnGroup() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtDistanceAlongSpline(float inDistance) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetIsDriving();
    
protected:
    UFUNCTION()
    void EvaluatePingStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void Despawn();
    
protected:
    UFUNCTION()
    void BindHeistersHealthState();
    

    // Fix for true pure virtual functions not being implemented
};

