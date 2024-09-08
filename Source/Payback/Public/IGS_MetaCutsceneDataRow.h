#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MetaCutsceneDataRow.generated.h"

class UIGS_MetaCutsceneDataAsset;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UIGS_MetaCutsceneDataAsset> CutsceneData;
    
    FIGS_MetaCutsceneDataRow();
};

