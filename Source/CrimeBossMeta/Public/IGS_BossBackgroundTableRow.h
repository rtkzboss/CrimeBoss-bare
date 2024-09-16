#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_BossBackgroundTableRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_BossBackgroundTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SubLevelName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ActiveFromTreshold;

    FIGS_BossBackgroundTableRow();
};
