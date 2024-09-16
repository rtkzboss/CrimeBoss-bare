#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_AmmoData.h"
#include "IGS_AmmoInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_AmmoTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_AmmoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_AmmoInventoryObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AmmoData Data;

    FIGS_AmmoTableRow();
};
