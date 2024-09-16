#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsID.h"
#include "Engine/DataTable.h"
#include "IGS_PlayerBotItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerBotTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_PlayerBotTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_SettingsID> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_PlayerBotItemsData Data;

    FIGS_PlayerBotTableRow();
};
