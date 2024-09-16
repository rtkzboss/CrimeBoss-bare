#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_GlobalInventoryObject.h"
#include "IGS_GlobalItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalItemTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GlobalItemTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_GlobalInventoryObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_GlobalItemsData Data;

    FIGS_GlobalItemTableRow();
};
