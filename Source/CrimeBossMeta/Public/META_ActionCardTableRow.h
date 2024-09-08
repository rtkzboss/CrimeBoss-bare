#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "META_ActionCardData.h"
#include "META_ActionCardTableRow.generated.h"

class UMETA_BaseActionCard;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_ActionCardTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UMETA_BaseActionCard> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_ActionCardData Data;
    
    FMETA_ActionCardTableRow();
};

