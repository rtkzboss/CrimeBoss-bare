#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_AssetCollectionTableRow.generated.h"

USTRUCT(BlueprintType)
struct ST_FRAMEWORK_API FIGS_AssetCollectionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectionName;
    
    FIGS_AssetCollectionTableRow();
};

