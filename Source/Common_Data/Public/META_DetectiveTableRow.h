#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_DetectiveID.h"
#include "Templates/SubclassOf.h"
#include "META_DetectiveTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_DetectiveTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UMETA_DetectiveID> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag UnlockTag;

    FMETA_DetectiveTableRow();
};
