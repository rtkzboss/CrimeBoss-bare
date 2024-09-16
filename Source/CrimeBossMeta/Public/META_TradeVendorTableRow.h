#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMETA_TradeVendor.h"
#include "META_TradeVendorTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_TradeVendorTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_TradeVendor ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    FMETA_TradeVendorTableRow();
};
