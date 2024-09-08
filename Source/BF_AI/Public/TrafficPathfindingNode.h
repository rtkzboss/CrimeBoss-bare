#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrafficPathfindingNode.generated.h"

class AIGS_VehicleDestinationPointFramework;
class AIGS_VehicleExitPointFramework;
class AIGS_VehicleSpawnerFramework;
class UIGS_TrafficPathComponent;
class UTrafficPathfindingEdge;

UCLASS()
class BF_AI_API UTrafficPathfindingNode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UTrafficPathfindingEdge*> EdgesOut;
    
    UPROPERTY()
    TArray<UTrafficPathfindingEdge*> EdgesIn;
    
    UPROPERTY()
    TArray<UTrafficPathfindingEdge*> EdgesOutReversed;
    
    UPROPERTY()
    TArray<UTrafficPathfindingEdge*> EdgesInReversed;
    
    UPROPERTY(Instanced)
    UIGS_TrafficPathComponent* Segment;
    
    UPROPERTY()
    TArray<AIGS_VehicleDestinationPointFramework*> DestinationPoints;
    
    UPROPERTY()
    TArray<AIGS_VehicleExitPointFramework*> ExitPoints;
    
    UPROPERTY()
    TArray<AIGS_VehicleSpawnerFramework*> VehicleSpawners;
    
public:
    UTrafficPathfindingNode();

};

