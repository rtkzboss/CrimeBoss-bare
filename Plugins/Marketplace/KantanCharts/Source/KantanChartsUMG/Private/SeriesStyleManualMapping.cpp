#include "SeriesStyleManualMapping.h"
#include "UObject/NoExportTypes.h"

FSeriesStyleManualMapping::FSeriesStyleManualMapping() {
    (*this).SeriesId = NAME_None;
    (*this).Style.StyleId = NAME_None;
    (*this).Style.PointStyle = nullptr;
    (*this).Style.Color = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
}
