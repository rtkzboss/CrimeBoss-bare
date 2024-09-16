#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleDatabaseData.generated.h"

class AIGS_StaticVehicleBase;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehicleDatabaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_StaticVehicleBase> VehicleBlueprint;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PickProbability;

    FIGS_VehicleDatabaseData();
};
