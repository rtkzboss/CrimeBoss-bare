#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ModData.h"
#include "Templates/SubclassOf.h"
#include "IGS_ModTableRow.generated.h"

class UIGS_ModInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ModTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_ModInventoryObject> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ModData Data;
    
    FIGS_ModTableRow();
};

