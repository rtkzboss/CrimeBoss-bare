#include "IGS_VehicleGroupTableRow.h"
#include "UObject/NoExportTypes.h"
#include "IGS_VehicleDatabaseData.h"

FIGS_VehicleGroupTableRow::FIGS_VehicleGroupTableRow() {
    (*this).ID = EIGS_VehicleGroup::CommonCivilian;
    (*this).Data.Colors = TArray<FColor>{};
    (*this).Data.VehiclesData = TArray<FIGS_VehicleDatabaseData>{};
}
