#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuBackgroundConditionBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_MenuBackgroundTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MenuBackgroundTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_MenuBackgroundConditionBase> Condition;

    FIGS_MenuBackgroundTableRow();
};
