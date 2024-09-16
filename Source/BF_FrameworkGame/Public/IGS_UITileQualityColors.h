#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_UITileQualityColors.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UITileQualityColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultColorLight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultColorDark;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FocusedColorLight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FocusedColorDark;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor OutlineColorLight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor OutlineColorDark;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor OutlineColorFocused;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HalftoneColorDefault;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HalftoneColorFocused;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor LockedColor;

    BF_FRAMEWORKGAME_API FIGS_UITileQualityColors();
};
