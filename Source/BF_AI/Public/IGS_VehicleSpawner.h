#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleSpawnerFramework.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "DriveFinishedDelegate.h"
#include "SpawnerEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleSpawner.generated.h"

class AIGS_TrafficSegment;
class AIGS_VehicleBase;
class UIGS_TrafficPathComponent;
class UIGS_VehicleObject;

UCLASS()
class BF_AI_API AIGS_VehicleSpawner : public AIGS_VehicleSpawnerFramework {
    GENERATED_BODY()
public:
    AIGS_VehicleSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AIGS_VehicleBase* SpawnVehicleOnPath(TSoftClassPtr<AIGS_VehicleBase> invehicleToSpawn, TArray<UIGS_TrafficPathComponent*> InPath);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> SpawnSpecific(TSubclassOf<UIGS_VehicleObject> inSpecificVehicle, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> Spawn(EIGS_VehicleSpawnGroup inVehicleGroup, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_VehicleBase*> GetSpawnedVehicles() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPTick(float DeltaSeconds);
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerEvent OnAllDriveFinished;
    
    UPROPERTY(BlueprintAssignable)
    FDriveFinished OnDriveFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartupOnly;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AIGS_VehicleBase> ForceVehicleSpawn;
    
    UPROPERTY(EditAnywhere)
    uint32 VehicleGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_TrafficSegment* Path;
    
    UPROPERTY(EditAnywhere)
    int8 MaxSpawnsCount;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Cooldown;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEnabled;
    
};

