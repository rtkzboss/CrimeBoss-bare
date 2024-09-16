#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ModalTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_ModalTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText AcceptButtonText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CancelButtonText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ExtraOptionButtonText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    FIGS_ModalTableRow();
};
