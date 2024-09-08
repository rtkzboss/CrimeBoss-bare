#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_LootCollectionTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootCollectionDatabase.generated.h"

class UIGS_LootCollectionObject;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_LootCollectionDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_LootCollectionDatabase();

    UFUNCTION(BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_LootCollectionObject>& inClass) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_LootCollectionTableRow GetDataLootItem(UObject* inWCO, const TSubclassOf<UIGS_LootCollectionObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintPure)
    FIGS_LootCollectionTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootCollectionTableRow> GetDatabaseTableBP();
    
};

