#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_GadgetData.h"
#include "IGS_GadgetInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_GadgetTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GadgetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_GadgetInventoryObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_GadgetData Data;

    FIGS_GadgetTableRow();
};
