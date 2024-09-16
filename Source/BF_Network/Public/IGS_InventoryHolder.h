#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryHolder.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT()
struct FIGS_InventoryHolder {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UIGS_InventoryObjectFramework> InventoryObjectFramework;

    UPROPERTY()
    uint32 ID;

    BF_NETWORK_API FIGS_InventoryHolder();
};
