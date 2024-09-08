#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagInfo.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LootBagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<UIGS_InventoryObjectFramework*> Items;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<int32> ItemIDs;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float CurrentCapacity;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsOverfilled;
    
    FIGS_LootBagInfo();
};

