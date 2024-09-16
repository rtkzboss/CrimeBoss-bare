#include "IGS_VehicleGroupTableRow.h"

FIGS_VehicleGroupTableRow::FIGS_VehicleGroupTableRow() {
    (*this).ID = EIGS_VehicleGroup::CommonCivilian;
    (*this).Data.Colors = {};
    (*this).Data.VehiclesData = {};
}
