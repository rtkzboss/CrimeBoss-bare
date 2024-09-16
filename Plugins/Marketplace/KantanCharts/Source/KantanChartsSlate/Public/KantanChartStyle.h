#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateWidgetStyle.h"
#include "KantanChartStyle.generated.h"

USTRUCT(BlueprintType)
struct KANTANCHARTSSLATE_API FKantanChartStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Background;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ChartLineColor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChartLineThickness;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo BaseFont;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TitleFontSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AxisDescriptionFontSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AxisValueFontSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FontColor;

    FKantanChartStyle();
};
