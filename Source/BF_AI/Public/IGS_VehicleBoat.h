#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "NavAreas/NavArea.h"
#include "BuoyancyTypes.h"
#include "IGS_BuoyancySimulation.h"
#include "IGS_Drowning.h"
#include "IGS_VehicleBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleBoat.generated.h"

class AIGS_ResetZone;
class UAnimMontage;
class UBoxComponent;
class UBuoyancyComponent;
class UChildActorComponent;
class UIGS_AIBoatSpawnComponent;
class UIGS_TrafficPathComponent;
class UNavModifierComponent;
class UStaticMeshComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_VehicleBoat : public AIGS_VehicleBase {
    GENERATED_BODY()
public:
    AIGS_VehicleBoat(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartDrive_BP(TArray<UIGS_TrafficPathComponent*> InPath);

public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSocketMesh(UStaticMeshComponent* InMesh, FName inSocket) const;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCustomDestination(FVector InLocation, FRotator InRotation);

    UFUNCTION(BlueprintCallable)
    void ParkBoat();

    UFUNCTION(BlueprintPure)
    void GetBuoyancyWaterStatus(int32 Index, bool& outInWater);

    UFUNCTION(BlueprintPure)
    void GetBuoyancyData(FBuoyancyData& outBuoyancyData);

    UFUNCTION(BlueprintCallable)
    void ChangeBoatSpeed(float newSpeed);

    UPROPERTY(BlueprintReadOnly)
    bool UseCustomDestination;

    UPROPERTY()
    FRotator CustomDestinationRotation;

    UPROPERTY()
    FVector CustomDestinationLocation;

    UPROPERTY()
    bool bStartParking;

    UPROPERTY()
    bool bStartedDriving;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavArea> StartNavAreaClass;

    UPROPERTY(BlueprintAssignable)
    FIGS_Drowning OnDrowning;

protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UBuoyancyComponent* Buoyancy;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimMontage*> GetOutBoatAnimations;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* VehicleCollisionBox;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UChildActorComponent* PlayerResetTrigger;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_AIBoatSpawnComponent* AIBoatSpawnerComponent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPassengersGetOutAfterDriveFinished;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckForCollision;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToStop;

    UPROPERTY(Replicated)
    FVector_NetQuantize mR_TargetPosition;

    UPROPERTY(Replicated)
    FRotator mR_TargetRotation;

    UPROPERTY()
    FVector TargetLookatPosition;

    UPROPERTY(Replicated)
    FVector mR_NewTargetParkingLocation;

    UPROPERTY(Replicated)
    bool mR_bDrivingOnServer;

    UPROPERTY(Replicated)
    bool mR_bArrivedAtDestination;

    UPROPERTY()
    float defaultSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float followDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float rotationSlowFactor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float waveSlowFactor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EscapeDriveSpeed;

    UPROPERTY(BlueprintReadWrite)
    float BuoyancyAmplitude;

    UPROPERTY(BlueprintReadWrite)
    float BoatForwardMultiplier;

    UPROPERTY(BlueprintReadWrite)
    float WaveMaxAmplitude1;

    UPROPERTY(BlueprintReadWrite)
    float WaveMaxAmplitude2;

    UPROPERTY(Instanced, VisibleAnywhere)
    UNavModifierComponent* NavModifier;

    UPROPERTY(Replicated)
    FVector mR_ParkPosition;

    UPROPERTY(Replicated)
    FRotator mR_ParkRotation;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bUseGravity;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    AIGS_ResetZone* ActorClass;

    UPROPERTY(BlueprintReadOnly)
    bool bIsDrowning;

    UPROPERTY()
    bool bCorrectlyParkedInWater;

    UPROPERTY()
    FIGS_BuoyancySimulation m_BuoyancySim;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
