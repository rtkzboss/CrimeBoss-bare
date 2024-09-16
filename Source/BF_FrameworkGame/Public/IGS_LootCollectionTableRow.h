#pragma once
#include "CoreMinimal.h"
#include "IGS_LootCollectionObject.h"
#include "Engine/DataTable.h"
#include "IGS_LootCollectionData.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootCollectionTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LootCollectionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_LootCollectionObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_LootCollectionData Data;

    FIGS_LootCollectionTableRow();
};
