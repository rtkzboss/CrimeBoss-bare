#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_MovableVehicleGroupData.h"
#include "Templates/SubclassOf.h"
#include "IGS_MovableVehicleGroupTableRow.generated.h"

class UIGS_VehicleObject;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_MovableVehicleGroupTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_VehicleObject> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_VehicleSpawnGroup VehicleSpawnGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_VehicleSplineGroup VehicleSplineGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_MovableVehicleGroupData Data;
    
    FIGS_MovableVehicleGroupTableRow();
};

