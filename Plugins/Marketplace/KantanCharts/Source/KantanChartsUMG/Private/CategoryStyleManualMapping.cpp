#include "CategoryStyleManualMapping.h"
#include "UObject/NoExportTypes.h"

FCategoryStyleManualMapping::FCategoryStyleManualMapping() {
    (*this).CategoryId = NAME_None;
    (*this).Style.CategoryStyleId = NAME_None;
    (*this).Style.Color = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
}
