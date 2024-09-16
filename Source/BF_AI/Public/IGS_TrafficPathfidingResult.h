#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficPathfidingResult.generated.h"

class AIGS_VehicleSpawnerFramework;
class UIGS_TrafficPathComponent;

USTRUCT()
struct BF_AI_API FIGS_TrafficPathfidingResult {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AIGS_VehicleSpawnerFramework* Spawner;

    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UIGS_TrafficPathComponent*> Path;

    FIGS_TrafficPathfidingResult();
};
