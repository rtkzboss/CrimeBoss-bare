#include "KantanBarChartBase.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

UKantanBarChartBase::UKantanBarChartBase() {
    (*this).WidgetStyle.BarOpacity = 1.000000000e+00f;
    (*this).WidgetStyle.BarOutlineOpacity = 1.000000000e+00f;
    (*this).WidgetStyle.BarOutlineThickness = 1.000000000e+00f;
    (*this).WidgetStyle.Background.ImageSize.X = 3.200000000e+01f;
    (*this).WidgetStyle.Background.ImageSize.Y = 3.200000000e+01f;
    (*this).WidgetStyle.Background.TintColor = FSlateColor(FLinearColor(0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 3.000000119e-01f));
    (*this).WidgetStyle.Background.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.ChartLineColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 6.000000238e-01f);
    (*this).WidgetStyle.ChartLineThickness = 1.000000000e+00f;
    (*this).WidgetStyle.TitleFontSize = 24;
    (*this).WidgetStyle.FontColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).LabelPosition = EKantanBarLabelPosition::Standard;
    (*this).BarToGapRatio = 3.000000000e+00f;
    (*this).ValueExtentsDisplay = EKantanBarValueExtents::ZeroLineOnly;
    (*this).ValueAxisCfg.MarkerSpacing = 1.000000000e+00f;
    (*this).ValueAxisCfg.MaxValueDigits = 5;
    (*this).ValueAxisCfg.LeftBottomAxis.bEnabled = true;
    (*this).ValueAxisCfg.LeftBottomAxis.bShowMarkers = true;
    (*this).ValueAxisCfg.LeftBottomAxis.bShowLabels = true;
}

void UKantanBarChartBase::SetValueAxisConfig(const FCartesianAxisConfig& InCfg) {
}

void UKantanBarChartBase::SetOrientation(EKantanBarChartOrientation InOrientation) {
}

void UKantanBarChartBase::SetMaxBarValue(float InMaxValue) {
}

void UKantanBarChartBase::SetLabelPosition(EKantanBarLabelPosition InPosition) {
}

void UKantanBarChartBase::SetExtentsDisplay(EKantanBarValueExtents InExtents) {
}

void UKantanBarChartBase::SetBarToGapRatio(float InRatio) {
}

