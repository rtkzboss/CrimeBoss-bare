#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MultiplayerHubDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_MultiplayerHubDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> ButtonImage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ButtonName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ButtonDescription;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SelectionLabelDefaultText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SelectionLabelDisabledText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTimeLimited;

    BF_GUI_API FIGS_MultiplayerHubDataRow();
};
