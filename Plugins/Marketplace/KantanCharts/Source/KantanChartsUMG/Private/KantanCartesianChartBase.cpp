#include "KantanCartesianChartBase.h"
#include "KantanSeriesStyleSet.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

UKantanCartesianChartBase::UKantanCartesianChartBase() {
    (*this).WidgetStyle.DataOpacity = 1.000000000e+00f;
    (*this).WidgetStyle.DataLineThickness = 1.000000000e+00f;
    (*this).WidgetStyle.Background.ImageSize.X = 3.200000000e+01f;
    (*this).WidgetStyle.Background.ImageSize.Y = 3.200000000e+01f;
    (*this).WidgetStyle.Background.TintColor = FSlateColor(FLinearColor(0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 3.000000119e-01f));
    (*this).WidgetStyle.Background.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.ChartLineColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 6.000000238e-01f);
    (*this).WidgetStyle.ChartLineThickness = 1.000000000e+00f;
    (*this).WidgetStyle.TitleFontSize = 24;
    (*this).WidgetStyle.FontColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).DataPointSize = EKantanDataPointSize::Medium;
    (*this).XAxisCfg.MarkerSpacing = 1.000000000e+00f;
    (*this).XAxisCfg.MaxValueDigits = 5;
    (*this).XAxisCfg.LeftBottomAxis.bEnabled = true;
    (*this).XAxisCfg.LeftBottomAxis.bShowMarkers = true;
    (*this).XAxisCfg.LeftBottomAxis.bShowLabels = true;
    (*this).YAxisCfg.MarkerSpacing = 1.000000000e+00f;
    (*this).YAxisCfg.MaxValueDigits = 5;
    (*this).YAxisCfg.LeftBottomAxis.bEnabled = true;
    (*this).YAxisCfg.LeftBottomAxis.bShowMarkers = true;
    (*this).YAxisCfg.LeftBottomAxis.bShowLabels = true;
    (*this).AxisTitlePadding.Top = 4.000000000e+00f;
    (*this).AxisTitlePadding.Bottom = 4.000000000e+00f;
    static ConstructorHelpers::FObjectFinder<UKantanSeriesStyleSet> gen(TEXT("/KantanCharts/Style/SeriesStyles/DefaultSeriesStyleSet.DefaultSeriesStyleSet"));
    (*this).SeriesStyleSet = gen.Object;
    (*this).bAntiAlias = true;
}

void UKantanCartesianChartBase::SetYAxisConfig(const FCartesianAxisConfig& InCfg) {
}

void UKantanCartesianChartBase::SetXAxisConfig(const FCartesianAxisConfig& InCfg) {
}

void UKantanCartesianChartBase::SetPlotScaleByRange(const FCartesianAxisRange& InRangeX, const FCartesianAxisRange& InRangeY) {
}

void UKantanCartesianChartBase::SetPlotScale(const FVector2D& InScale, const FVector2D& InFocalCoords) {
}

void UKantanCartesianChartBase::SetDataPointSize(EKantanDataPointSize InSize) {
}

void UKantanCartesianChartBase::SetAxisTitlePadding(const FMargin& InPadding) {
}

void UKantanCartesianChartBase::EnableSeries(FName ID, bool bEnable) {
}

void UKantanCartesianChartBase::ConfigureSeries(FName ID, bool bDrawPoints, bool bDrawLines) {
}

void UKantanCartesianChartBase::AddSeriesStyleOverride(FName SeriesId, UKantanPointStyle* PointStyle, FLinearColor Color) {
}

