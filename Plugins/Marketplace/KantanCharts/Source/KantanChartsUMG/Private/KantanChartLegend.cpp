#include "KantanChartLegend.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

UKantanChartLegend::UKantanChartLegend() {
    (*this).Background.ImageSize.X = 3.200000000e+01f;
    (*this).Background.ImageSize.Y = 3.200000000e+01f;
    (*this).Background.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 0.000000000e+00f));
    (*this).Background.DrawAs = ESlateBrushDrawType::Image;
}

void UKantanChartLegend::SetSeriesPadding(const FMargin& InPadding) {
}

void UKantanChartLegend::SetMargins(const FMargin& InMargins) {
}

void UKantanChartLegend::SetFontSize(int32 InFontSize) {
}

void UKantanChartLegend::SetChart(UKantanCartesianChartBase* InChart) {
}

void UKantanChartLegend::SetBackground(const FSlateBrush& InBrush) {
}

