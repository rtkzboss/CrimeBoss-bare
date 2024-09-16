#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_LootItemInventoryObject.h"
#include "IGS_LootItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootItemTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_LootItemTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_LootItemInventoryObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_LootItemsData Data;

    FIGS_LootItemTableRow();
};
