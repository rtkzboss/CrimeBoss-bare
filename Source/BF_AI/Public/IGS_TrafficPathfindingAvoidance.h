#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_VehiclesRecord.h"
#include "IGS_TrafficPathfindingAvoidance.generated.h"

class UIGS_TrafficPathComponent;

UCLASS()
class BF_AI_API UIGS_TrafficPathfindingAvoidance : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<TWeakObjectPtr<UIGS_TrafficPathComponent>, FIGS_VehiclesRecord> VehiclesOnPaths;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UIGS_TrafficPathComponent>> m_VisitedPathsTmp;
    
public:
    UIGS_TrafficPathfindingAvoidance();

};

