#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_PlanningBoardRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlanningBoardRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EntitlementTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag voiceoverTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ItemsTable;

    FMETA_PlanningBoardRow();
};
