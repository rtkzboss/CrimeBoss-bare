#pragma once
#include "CoreMinimal.h"
#include "IGS_VehiclesRecord.generated.h"

class UPFPathFollowerComponent;

USTRUCT()
struct BF_AI_API FIGS_VehiclesRecord {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UPFPathFollowerComponent>> Vehicles;

    FIGS_VehiclesRecord();
};
