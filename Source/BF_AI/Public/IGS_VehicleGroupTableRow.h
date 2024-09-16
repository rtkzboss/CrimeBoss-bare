#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_VehicleGroup.h"
#include "IGS_VehicleGroupData.h"
#include "IGS_VehicleGroupTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehicleGroupTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_VehicleGroup ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_VehicleGroupData Data;

    FIGS_VehicleGroupTableRow();
};
