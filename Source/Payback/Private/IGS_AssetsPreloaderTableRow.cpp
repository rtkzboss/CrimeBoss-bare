#include "IGS_AssetsPreloaderTableRow.h"

FIGS_AssetsPreloaderTableRow::FIGS_AssetsPreloaderTableRow() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
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
