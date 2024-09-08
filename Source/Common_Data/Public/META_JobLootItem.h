#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_JobLootItem.generated.h"

class UIGS_LootItemInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_JobLootItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_LootItemInventoryObject> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ResultCount;
    
    FMETA_JobLootItem();
};

