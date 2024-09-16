#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_DialogueVariationData.h"
#include "IGS_DialogueLineTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueLineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDisabled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_DialogueVariationData> Variations;

    FIGS_DialogueLineTableRow();
};
