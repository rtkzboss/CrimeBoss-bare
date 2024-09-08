#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "IGS_HitInfo.h"
#include "IGS_RideableVehicleBaseFramework.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerEnterVehicleDelegateDelegate.h"
#include "PlayerExitVehicleDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_RideableVehicle_Base.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_LootBagPickup;
class APawn;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UBoxComponent;
class UCameraComponent;
class UCurveVector;
class UIGS_InteractiveComponent;
class UIGS_ObjectStatus;
class UParticleSystem;
class USkeletalMeshComponent;
class USpeedometer;

UCLASS(Abstract, Config=Inherit)
class BF_RIDEABLEVEHICLES_API AIGS_RideableVehicle_Base : public AIGS_RideableVehicleBaseFramework, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerEnterVehicleDelegate OnEnterVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerExitVehicleDelegate OnExitVehicle;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere, ReplicatedUsing=OnRep_PlayerSlots)
    TArray<AIGS_GameCharacterFramework*> PlayerSlots;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RuntimeBagInfo)
    TArray<AIGS_LootBagPickup*> RuntimeBagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    UCurveVector* NudgeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FName NudgeBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSubclassOf<USpeedometer> SpeedometerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxKilometersPerHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationNormalizationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool CanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LocationSyncLerpForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSyncLerpForce;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ThrottleTiming;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* EngineDestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* DestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EngineOffOnHealthPercent;
    
    UPROPERTY(ReplicatedUsing=OnRep_EngineDestroed)
    bool bIsEngineDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkSwitchValue* VehicleTypeAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* HornStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* HornStopAkEvent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleDefaultsOnly)
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleDefaultsOnly)
    UCameraComponent* FirstPersonCameraComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* EntryTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseMass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> SeatSocketNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> SeatMeshSocketNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> BagSocketNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumFreeBags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BagWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BagInteractionDistance;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(Instanced)
    USpeedometer* m_Speedometer;
    
    UPROPERTY(ReplicatedUsing=OnRepLocation)
    FVector mR_location;
    
    UPROPERTY(ReplicatedUsing=OnRepRotation)
    FRotator mR_rotation;
    
    UPROPERTY(ReplicatedUsing=OnRepLinearDrag)
    FVector mR_linearDrag;
    
    UPROPERTY(ReplicatedUsing=OnRepAngularDrag)
    FVector mR_angularDrag;
    
    UPROPERTY()
    FVector m_AccumulatedLocDif;
    
    UPROPERTY()
    FRotator m_AccumulatedRotDif;
    
    UPROPERTY()
    APawn* m_Driver;
    
public:
    AIGS_RideableVehicle_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void VehicleDestroy(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnVehicleExitedCosmetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVehicleEnteredCosmetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVehicleDriverExitedCosmetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVehicleDriverEnteredCosmetic();
    
    UFUNCTION()
    void OnUpdateThrottleTiming();
    
    UFUNCTION(Server, Unreliable)
    void OnStopUsing_SERVER(int32 inSeatIndex);
    
    UFUNCTION(NetMulticast, Unreliable)
    void OnStopUsing_MULTICAST(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex);
    
    UFUNCTION(Reliable, Server)
    void OnStartUsing_SERVER(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void OnStartUsing_MULTICAST(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex);
    
private:
    UFUNCTION()
    void OnRepRotation();
    
    UFUNCTION()
    void OnRepLocation();
    
    UFUNCTION()
    void OnRepLinearDrag();
    
    UFUNCTION()
    void OnRepAngularDrag();
    
protected:
    UFUNCTION()
    void OnRep_RuntimeBagInfo();
    
    UFUNCTION()
    void OnRep_PlayerSlots();
    
public:
    UFUNCTION()
    void OnRep_EngineDestroed();
    
protected:
    UFUNCTION(Server, Unreliable)
    void OnDetachBag_SERVER(int32 inBagIndex);
    
    UFUNCTION(NetMulticast, Unreliable)
    void OnDetachBag_MULTICAST(AIGS_LootBagPickup* inBag, int32 inBagIndex);
    
    UFUNCTION(Reliable, Server)
    void OnAttachBag_SERVER(AIGS_LootBagPickup* inBag, int32 inBagIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void OnAttachBag_MULTICAST(AIGS_LootBagPickup* inBag, int32 inBagIndex);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool OfferPositionToDismount(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex, FTransform& OutPosition) const;
    
protected:
    UFUNCTION(Reliable, Server)
    void LootBagDestroyed_SERVER(int32 inIndex);
    
    UFUNCTION(BlueprintNativeEvent)
    void LootBagDestroyed(AIGS_LootBagPickup* inBagPickup);
    
private:
    UFUNCTION()
    void InteractClient(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION()
    void Interact(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION(Server, Unreliable)
    void Horn_SERVER(bool inStartPlaying);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Horn_MULTICAST(bool inStartPlaying);
    
public:
    UFUNCTION(BlueprintPure)
    float GetMaxVelocity() const;
    
    UFUNCTION(BlueprintPure)
    static float GetKmPerHAspect();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void FakeBoatCrouch();
    
public:
    UFUNCTION(Reliable, Server)
    void EngineDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckIsEngineOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CharacterSatInside(AIGS_GameCharacterFramework* inCharacter);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CanPickBag(AIGS_LootBagPickup* inBag, int32 inTargetSlot);
    

    // Fix for true pure virtual functions not being implemented
};

