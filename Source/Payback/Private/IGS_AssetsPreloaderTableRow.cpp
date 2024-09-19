#include "IGS_AssetsPreloaderTableRow.h"

FIGS_AssetsPreloaderTableRow::FIGS_AssetsPreloaderTableRow() {
    (*this).ID = FGameplayTag();
    (*this).CopsVariationTypes = TArray<EIGS_CopsVariationType>{};
    (*this).SWATVariationTypes = TArray<EIGS_SWATVariationType>{};
    (*this).GangstersVariationTypes = TArray<EIGS_GangsterVariationType>{};
    (*this).VehicleTypes = TArray<EIGS_VehicleSpawnGroup>{};
    (*this).PreloadBackupHeisters = false;
    (*this).PreloadRobots = false;
    (*this).AdditionalClasses = TArray<TSoftClassPtr<UObject>>{};
    (*this).AdditionalObjects = TArray<TSoftObjectPtr<UObject>>{};
    (*this).PoolDatabases = TArray<TSoftObjectPtr<UDataTable>>{};
}
