#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetTextLibrary.h"
#include "Engine/DataTable.h"
#include "EMETA_Gang.h"
#include "META_GangTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_GangTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_Gang ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText GangName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETextGender BossGender;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor GangColor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText BossDescription;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText GangDescription;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    FMETA_GangTableRow();
};
