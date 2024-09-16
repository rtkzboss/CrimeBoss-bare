#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_CarryableInventoryObject.h"
#include "IGS_CarryableTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_CarryableDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_CarryableDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_CarryableDatabase();

    UFUNCTION(BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_CarryableInventoryObject>& inClass) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_CarryableTableRow GetDataCarryable(const UObject* inWCO, const TSubclassOf<UIGS_CarryableInventoryObject>& inClass, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_CarryableTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

};
