#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "META_DialogueUIData.h"
#include "IGS_MetaVoiceoverDialogueDataRow.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaVoiceoverDialogueDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMETA_DialogueUIData DialogueData;

    FIGS_MetaVoiceoverDialogueDataRow();
};
