#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "IGS_HordeMode_UpgradeUI.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HordeMode_UpgradeUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText PickupText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText IconGlyph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor IconColor;

    COMMON_DATA_API FIGS_HordeMode_UpgradeUI();
};
