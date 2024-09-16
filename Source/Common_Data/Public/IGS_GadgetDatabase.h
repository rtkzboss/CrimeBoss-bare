#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_GadgetInventoryObject.h"
#include "IGS_GadgetTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_GadgetDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_GadgetDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_GadgetDatabase();

    UFUNCTION(BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_GadgetInventoryObject>& inClass) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_GadgetTableRow GetDataGadget(UObject* inWCO, const TSubclassOf<UIGS_GadgetInventoryObject>& inClass, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_GadgetTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

};
