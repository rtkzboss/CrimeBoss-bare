#include "KantanChartLegend.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

UKantanChartLegend::UKantanChartLegend() {
    (*this).Background.ImageSize.X = 3.200000000e+01f;
    (*this).Background.ImageSize.Y = 3.200000000e+01f;
    auto gen = TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor");
    (*gen->ContainerPtrToValuePtr<FLinearColor>(&(*this).Background.TintColor, 0)).R = 1.000000000e+00f;
    (*gen->ContainerPtrToValuePtr<FLinearColor>(&(*this).Background.TintColor, 0)).G = 1.000000000e+00f;
    (*gen->ContainerPtrToValuePtr<FLinearColor>(&(*this).Background.TintColor, 0)).B = 1.000000000e+00f;
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

