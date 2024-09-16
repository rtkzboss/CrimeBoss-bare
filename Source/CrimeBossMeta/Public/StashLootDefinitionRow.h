#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "StashLootDefinitionRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FStashLootDefinitionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText PayButtonText;

    FStashLootDefinitionRow();
};
