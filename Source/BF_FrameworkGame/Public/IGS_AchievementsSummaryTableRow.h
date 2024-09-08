#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_AchievementsReleaseType.h"
#include "IGS_AchievementsSummaryTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FIGS_AchievementsSummaryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* Table;
    
    UPROPERTY(EditAnywhere)
    EIGS_AchievementsReleaseType Release;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag UpdateEntitlementTag;
    
    BF_FRAMEWORKGAME_API FIGS_AchievementsSummaryTableRow();
};

