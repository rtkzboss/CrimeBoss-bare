#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_RichPresenceMissionNameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RichPresenceMissionNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(EditAnywhere)
    FText Name;

    BF_FRAMEWORKGAME_API FIGS_RichPresenceMissionNameTableRow();
};
