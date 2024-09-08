#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_CopsVariationType.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "IGS_AssetsPreloaderTableRow.generated.h"

class UDataTable;
class UObject;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_AssetsPreloaderTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CopsVariationType> CopsVariationTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_SWATVariationType> SWATVariationTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_GangsterVariationType> GangstersVariationTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_VehicleSpawnGroup> VehicleTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PreloadBackupHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PreloadRobots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<UObject>> AdditionalClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> AdditionalObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UDataTable>> PoolDatabases;
    
    FIGS_AssetsPreloaderTableRow();
};

