#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_MultiplayerJobCategoryRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FIGS_MultiplayerJobCategoryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* CategoryItemsDataTable;
    
    CRIMEBOSSMETA_API FIGS_MultiplayerJobCategoryRow();
};

