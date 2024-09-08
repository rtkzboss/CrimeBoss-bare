#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_JobCategoryItemUIData.h"
#include "IGS_MultiplayerJobCategoryItemRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MultiplayerJobCategoryItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer MissionScenarios;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EntitlementTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_JobCategoryItemUIData UIData;
    
    CRIMEBOSSMETA_API FIGS_MultiplayerJobCategoryItemRow();
};

