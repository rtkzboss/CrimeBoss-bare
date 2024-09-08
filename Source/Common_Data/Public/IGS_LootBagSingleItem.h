#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootBagSingleItem.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_LootBagSingleItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<UIGS_InventoryObjectFramework> ItemClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_InventoryObjectUniversalData UniversalData;
    
    FIGS_LootBagSingleItem();
};

