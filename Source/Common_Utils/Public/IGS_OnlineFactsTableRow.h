#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_OnlineFactsTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_UTILS_API FIGS_OnlineFactsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsActive;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString From;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString To;

    FIGS_OnlineFactsTableRow();
};
