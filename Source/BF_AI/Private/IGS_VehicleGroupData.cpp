#include "IGS_VehicleGroupData.h"

FIGS_VehicleGroupData::FIGS_VehicleGroupData() {
    (*this).Colors = TArray<FColor>{};
    (*this).VehiclesData = TArray<FIGS_VehicleDatabaseData>{};
}
