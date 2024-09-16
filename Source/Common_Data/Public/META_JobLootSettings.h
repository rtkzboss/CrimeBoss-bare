#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "IGS_LootItemInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_JobLootSettings.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_JobLootSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_LootItemInventoryObject> Item;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval RandomAmountInterval;

    FMETA_JobLootSettings();
};
