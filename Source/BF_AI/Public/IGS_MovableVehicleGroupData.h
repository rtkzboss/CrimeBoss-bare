#pragma once
#include "CoreMinimal.h"
#include "IGS_MovableVehicleGroupData.generated.h"

class AIGS_VehicleBase;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_MovableVehicleGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDefault;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_VehicleBase> Vehicle;

    FIGS_MovableVehicleGroupData();
};
