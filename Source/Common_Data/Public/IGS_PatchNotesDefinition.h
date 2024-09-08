#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_PatchNotesDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_PatchNotesDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    FIGS_PatchNotesDefinition();
};

