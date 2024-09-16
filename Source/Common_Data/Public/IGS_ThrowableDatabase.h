#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_ThrowableInventoryObject.h"
#include "IGS_ThrowableTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableDatabase.generated.h"

class UDataTable;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_ThrowableDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_ThrowableDatabase();

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_ThrowableDatabase* GetThrowableDatabaseInstance(UObject* inWCO);

    UFUNCTION(BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_ThrowableInventoryObject>& inClass) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_ThrowableTableRow GetDataThrowable(UObject* inWCO, const TSubclassOf<UIGS_ThrowableInventoryObject>& inClass, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_ThrowableTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

};
