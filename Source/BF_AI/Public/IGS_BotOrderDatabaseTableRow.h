#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "Engine/DataTable.h"
#include "IGS_BotOrderDatabaseData.h"
#include "IGS_BotOrderDatabaseUIData.h"
#include "IGS_BotOrderDatabaseTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_BotOrderDatabaseTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_BotCommandDefinition ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BotOrderDatabaseData Data;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BotOrderDatabaseUIData UI;
    
    FIGS_BotOrderDatabaseTableRow();
};

