#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_EquipmentData.h"
#include "Templates/SubclassOf.h"
#include "IGS_EquipmentTableRow.generated.h"

class UIGS_EquipmentInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_EquipmentTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_EquipmentInventoryObject> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_EquipmentData Data;
    
    FIGS_EquipmentTableRow();
};

