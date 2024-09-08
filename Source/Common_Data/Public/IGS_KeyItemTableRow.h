#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_KeyItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_KeyItemTableRow.generated.h"

class UIGS_KeyItemInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_KeyItemTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_KeyItemInventoryObject> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_KeyItemsData Data;
    
    FIGS_KeyItemTableRow();
};

