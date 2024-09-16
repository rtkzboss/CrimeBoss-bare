#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "META_Interval.h"
#include "IGS_RecomendedItemDefinition.h"
#include "IGS_MultiplayerJobRecomendedItemRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MultiplayerJobRecomendedItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMETA_Interval LevelRange;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_RecomendedItemDefinition> JobCategoryItemPools;

    CRIMEBOSSMETA_API FIGS_MultiplayerJobRecomendedItemRow();
};
