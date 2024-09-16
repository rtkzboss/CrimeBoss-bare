#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_DialogueCharacterLinesRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueCharacterLinesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_DialogueGroupCharacterHolder ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UDataTable> CharacterDataTable;

    FIGS_DialogueCharacterLinesRow();
};
