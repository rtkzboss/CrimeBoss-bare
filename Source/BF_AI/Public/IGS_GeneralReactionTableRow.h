#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_GeneralReactionData.h"
#include "IGS_GeneralReactionTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_GeneralReactionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_GeneralReactionData Data;

    FIGS_GeneralReactionTableRow();
};
