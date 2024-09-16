#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_HUDData.generated.h"

class UTexture2D;
class UTexture;

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_HUDData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString WieldableName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> WieldableIcon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> WieldableHUDIcon;

    FIGS_HUDData();
};
