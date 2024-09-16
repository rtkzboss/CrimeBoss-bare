#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_ObjectiveConfig.h"
#include "META_ObjectiveTableRow.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ObjectiveTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CampaignOnly;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_ObjectiveConfig Config;

    FMETA_ObjectiveTableRow();
};
