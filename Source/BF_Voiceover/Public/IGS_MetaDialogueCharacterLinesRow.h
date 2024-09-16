#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "IGS_MetaDialogueCharacterLinesRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueCharacterLinesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MetaDialogueCharacter ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UDataTable> CharacterDataTable;

    FIGS_MetaDialogueCharacterLinesRow();
};
