#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_CarryableData.h"
#include "IGS_CarryableInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_CarryableTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CarryableTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_CarryableInventoryObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CarryableData Data;

    FIGS_CarryableTableRow();
};
