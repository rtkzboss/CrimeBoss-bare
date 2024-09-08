#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "META_ObjectivePresetTableRow.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ObjectivePresetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer Objectives;
    
    FMETA_ObjectivePresetTableRow();
};

