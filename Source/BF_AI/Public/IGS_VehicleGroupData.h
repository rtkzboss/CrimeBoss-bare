#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_VehicleDatabaseData.h"
#include "IGS_VehicleGroupData.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehicleGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FColor> Colors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_VehicleDatabaseData> VehiclesData;
    
    FIGS_VehicleGroupData();
};

