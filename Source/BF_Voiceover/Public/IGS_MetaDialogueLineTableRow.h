#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MetaDialogueVariationData.h"
#include "IGS_MetaDialogueLineTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueLineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_MetaDialogueVariationData> Variations;
    
    FIGS_MetaDialogueLineTableRow();
};

