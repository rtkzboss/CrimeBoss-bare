#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_LevelLinesRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_LevelLinesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UDataTable> CharacterLines;
    
    FIGS_LevelLinesRow();
};

