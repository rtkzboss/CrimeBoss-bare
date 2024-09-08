#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleDestinationAreaFramework.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "IGS_VehicleDestinationInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleDestinationArea.generated.h"

class AActor;
class AIGS_TrafficSegment;
class AIGS_VehicleBase;
class UBoxComponent;
class UIGS_TrafficPathComponent;
class UIGS_VehicleDestinationAreaPointComponent;
class USceneComponent;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_VehicleDestinationArea : public AIGS_VehicleDestinationAreaFramework, public IIGS_VehicleDestinationInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<AIGS_VehicleBase>> Vehicles;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Hidden;
    
    UPROPERTY()
    TSubclassOf<AActor> VehicleVisual;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<AActor*> SpawnedVisuals;
    
protected:
    UPROPERTY(EditAnywhere)
    uint32 VehicleGroups;
    
    UPROPERTY(EditAnywhere)
    int8 MaxSpawnsCount;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Cooldown;
    
    UPROPERTY(EditAnywhere)
    bool AllowTrespassers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_TrafficSegment> ParkingSegmentTemplate;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UIGS_TrafficPathComponent*> PossiblePaths;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UIGS_VehicleDestinationAreaPointComponent*> DestinationPoints;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UIGS_TrafficPathComponent*> PassingPaths;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* GroupRootComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* AreaDefinition;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsActive;
    
public:
    AIGS_VehicleDestinationArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> TriggerSpecificPassengersCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> TriggerCarArrivalBase(EIGS_VehicleSpawnGroup inVehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> TriggerCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, int32 vehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION()
    void OnShowParkingAreasChanged(bool inOn);
    

    // Fix for true pure virtual functions not being implemented
};

