#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "IGS_LocalizationImageParam.generated.h"

USTRUCT(BlueprintType)
struct COMMON_UTILS_API FIGS_LocalizationImageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Value;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> Widget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUserWidget* CustomWidget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D WidgetPositionOffset;

    FIGS_LocalizationImageParam();
};
