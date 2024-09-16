#pragma once
#include "CoreMinimal.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_TrafficPathfinding.generated.h"

class AActor;
class AIGS_VehicleBase;
class AIGS_VehicleDestinationArea;
class AIGS_VehicleDestinationPoint;
class UIGS_TrafficPathComponent;
class UObject;
class UTrafficPathfindingFilterBase;
class UTrafficPathfindingNode;

UCLASS(BlueprintType)
class BF_AI_API UIGS_TrafficPathfinding : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_TrafficPathfinding();

protected:
    UFUNCTION()
    void OnPopulationFinished();

public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetClosestDestinationPointOrArea(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AActor*& outDestination);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetClosestDestinationPoint(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AIGS_VehicleDestinationPoint*& outDestinationPoint);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetClosestDestinationArea(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AIGS_VehicleDestinationArea*& outDestinationArea);

    UFUNCTION(BlueprintCallable)
    static void ForceSetVehicleGroup(UObject* inDestination, int32 InValue);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<AIGS_VehicleBase*> CallCarsWithPassengersToPosition(const UObject* inWCO, FIGS_NoSpawnPointDefinition inCustomPassengers, FVector InPosition, EIGS_VehicleSpawnGroup inVehicleGroup, int32 inAmount, float MaxDistance);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<AIGS_VehicleBase*> CallCarsToPosition(const UObject* inWCO, FVector InPosition, EIGS_VehicleSpawnGroup inVehicleGroup, int32 inAmount, int32 inMinPassengers, int32 inMaxPassengers);

protected:
    UPROPERTY()
    TArray<UTrafficPathfindingNode*> m_Nodes;

    UPROPERTY()
    TMap<uint8, UTrafficPathfindingFilterBase*> m_FiltersCache;

    UPROPERTY()
    TMap<UIGS_TrafficPathComponent*, UTrafficPathfindingNode*> m_TrafficSegmentToNode;

    UPROPERTY()
    TArray<UTrafficPathfindingNode*> m_TmpPath;

};
