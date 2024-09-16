#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MetaCutsceneLevelLinesRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaCutsceneLevelLinesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UDataTable> CharacterLines;

    FIGS_MetaCutsceneLevelLinesRow();
};
