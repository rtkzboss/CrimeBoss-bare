#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_GlobalInventoryObject.h"
#include "IGS_GlobalItemTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalItemsDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_GlobalItemsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_GlobalItemsDatabase();

    UFUNCTION(BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_GlobalInventoryObject>& inClass) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_GlobalItemTableRow GetDataGlobalItem(UObject* inWCO, const TSubclassOf<UIGS_GlobalInventoryObject>& inClass, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_GlobalItemTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

};
