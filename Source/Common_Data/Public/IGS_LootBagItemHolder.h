#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_LootBagSingleItem.h"
#include "IGS_LootBagItemHolder.generated.h"

USTRUCT()
struct COMMON_DATA_API FIGS_LootBagItemHolder {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_LootBagSingleItem> Items;

    UPROPERTY(VisibleAnywhere)
    EIGS_ItemType ItemType;

    FIGS_LootBagItemHolder();
};
