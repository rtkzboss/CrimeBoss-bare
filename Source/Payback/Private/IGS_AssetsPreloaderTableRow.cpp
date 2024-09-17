#include "IGS_AssetsPreloaderTableRow.h"

FIGS_AssetsPreloaderTableRow::FIGS_AssetsPreloaderTableRow() {
    (*this).ID = FGameplayTag();
    (*this).CopsVariationTypes = {};
    (*this).SWATVariationTypes = {};
    (*this).GangstersVariationTypes = {};
    (*this).VehicleTypes = {};
    (*this).PreloadBackupHeisters = false;
    (*this).PreloadRobots = false;
    (*this).AdditionalClasses = {};
    (*this).AdditionalObjects = {};
    (*this).PoolDatabases = {};
}
