#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "CarExitPointsPair.h"
#include "IGS_RideableVehicle_Base.h"
#include "RideableCarMove.h"
#include "RideableCarState.h"
#include "IGS_RideableCar_Base.generated.h"

class AActor;
class UBoxComponent;
class UParticleSystem;
class UPrimitiveComponent;
class UWheeledVehicleMovementComponent;

UCLASS(Abstract)
class BF_RIDEABLEVEHICLES_API AIGS_RideableCar_Base : public AIGS_RideableVehicle_Base {
    GENERATED_BODY()
public:
    AIGS_RideableCar_Base(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Server, Unreliable)
    void SyncSteering_SERVER(float InValue);

    UFUNCTION()
    void SyncSteering();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void StartSmoothStop();

private:
    UFUNCTION(Server, Unreliable)
    void SetDriverCameraRotState_SERVER(bool inIsLookingAtRight);

    UFUNCTION(Reliable, Server)
    void SendMove_SERVER(FRideableCarMove Move);

    UFUNCTION()
    void OnRep_ServerMoveState();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHitVehicle(UPrimitiveComponent* inHitComp, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);

    UFUNCTION(BlueprintImplementableEvent)
    void OnGearChangedCosmetic(int32 InCurrentGear);

    UFUNCTION(BlueprintNativeEvent)
    void OnEntryTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);

    UFUNCTION(BlueprintNativeEvent)
    void OnCollisionTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);

private:
    UFUNCTION(BlueprintPure)
    bool IsGrounded();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SuspensionLength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WheelRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakeForceMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EngineAudioPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionSoundMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> SurfaceParticleMap;

private:
    UPROPERTY(ReplicatedUsing=OnRep_ServerMoveState)
    FRideableCarState ServerState;

    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> m_ComponentsInContact;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionTrigger;

    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* VehicleMovement;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsFL;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsFR;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsRL;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsRR;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarExitPointsPair> ExitPositions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitSpeedLimit;

    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float Steering;

    UPROPERTY(Replicated)
    float m_SteeringTarget;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
