#pragma once
#include "CoreMinimal.h"
#include "IGS_ListItemHolder.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct FIGS_ListItemHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_InventoryObjectFramework* InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ListItemID;
    
    BF_FRAMEWORKGAME_API FIGS_ListItemHolder();
};

