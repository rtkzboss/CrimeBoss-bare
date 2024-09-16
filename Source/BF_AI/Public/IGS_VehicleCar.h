#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "NavAreas/NavArea.h"
#include "CarBraking.h"
#include "IGS_RearDoorInteraction.h"
#include "IGS_SideDoorInteraction.h"
#include "IGS_VehicleBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleCar.generated.h"

class AIGS_PlayerCharacter;
class UAnimMontage;
class UAnimationAsset;
class UBoxComponent;
class UIGS_AICarSpawnComponent;
class UIGS_DestructableVehicleComponent;
class UIGS_DrivableTireComponent;
class UIGS_ObjectStatus;
class UMaterialInterface;
class UNavModifierComponent;
class UPrimitiveComponent;
class USceneComponent;
class USimpleWheeledVehicleMovementComponent;
class UStaticMeshComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_VehicleCar : public AIGS_VehicleBase {
    GENERATED_BODY()
public:
    AIGS_VehicleCar(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnPassengers();

    UFUNCTION(BlueprintCallable)
    void SetupWheels(TArray<UIGS_DrivableTireComponent*> inAllWheels);

    UFUNCTION(BlueprintCallable)
    void SetupAsStaticVehicle();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSocketMesh(UStaticMeshComponent* InMesh, FName inSocket) const;

    UFUNCTION()
    void PushPlayersOfVehicle();

    UFUNCTION()
    void PushPlayerAway(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);

    UFUNCTION(BlueprintCallable)
    void PlayDoorAnimation(int32 inPassengerID);

    UFUNCTION()
    void OnRep_OpenedDoors(TArray<int32> inPreviousOpenedDoors);

private:
    UFUNCTION()
    void OnRep_DisableCar(bool bPreviousDisable);

protected:
    UFUNCTION()
    void OnPassengerGettingOut(int32 inPassengerID);

private:
    UFUNCTION(NetMulticast, Reliable)
    void Multi_EndDrive();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableMeshTick() const;

    UFUNCTION()
    void DelayDisableCar();

    UFUNCTION()
    void CheckParkingLocation();

    UPROPERTY(BlueprintAssignable)
    FCarBraking OnCarBraking;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_ObjectStatus* ObjectStatus;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_DestructableVehicleComponent* DestructableVehicleComponent;

    UPROPERTY(BlueprintAssignable)
    FIGS_SideDoorInteraction OnSideDoorsInteraction;

    UPROPERTY(BlueprintAssignable)
    FIGS_RearDoorInteraction OnRearDoorsInteraction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* MissionLeaveAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimationAsset*> AllPossibleMissionLeaveAnimations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimationAsset*> PassengersEscapeAnimations;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_AICarSpawnComponent* AICarSpawner;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USimpleWheeledVehicleMovementComponent* WheeledVehicleComponent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* PlayerPushAwayTrigger;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* PlayerPushAwayBlockingCollider;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* TopTrigger;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* DistanceSensorLocation;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimMontage*> GetOutCarAnimations;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimMontage*> GetOutCarFastAnimations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UBoxComponent*> NavModifierAfterStop;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UBoxComponent*> RearDoorNavModiefiers;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavArea> DriveNavAreaClass;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavArea> StopNavAreaClass;

    UPROPERTY(Instanced, VisibleAnywhere)
    UNavModifierComponent* NavModifier;

    UPROPERTY(ReplicatedUsing=OnRep_OpenedDoors)
    TArray<int32> mR_OpenedDoors;

    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_DrivableTireComponent*> AllWheelsHolder;

    UPROPERTY(EditAnywhere)
    UAnimMontage* ParkingAniamtion;

    UPROPERTY(EditAnywhere)
    UAnimMontage* ParkingStopAniamtion;

    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ParkTestCollisionBox;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool NeedsPassengers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bUseGravity;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GravityDefault;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFollowSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelerateSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartParkingDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParkingSpeed;

    UPROPERTY()
    float ParkingSlowdownTime;

    UPROPERTY()
    float RotationSpeed;

    UPROPERTY()
    float WheelRotationSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DiftAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DiftSpeedDecrease;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLeashDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushPlayerDamage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WheelSize;

    UPROPERTY(EditAnywhere)
    float FrontStopTriggerOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* SkidMarks;

    UPROPERTY(BlueprintReadOnly)
    bool bIsFullyAccelerated;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DisableCar)
    bool bDisableCar;

    UPROPERTY()
    bool bDisableWhenGrounded;

    UPROPERTY(BlueprintReadWrite)
    float FrontWheelAngle;

private:
    UPROPERTY()
    TArray<AIGS_PlayerCharacter*> DamagedCharacters;

    UPROPERTY(Replicated)
    FVector_NetQuantize100 mR_NewVelocity;

    UPROPERTY(Replicated)
    FVector_NetQuantize100 mR_GravityForce;

    UPROPERTY(Replicated)
    FRotator mR_FinalRotation;

    UPROPERTY(Replicated)
    FRotator mR_FinalWheelRotation;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
