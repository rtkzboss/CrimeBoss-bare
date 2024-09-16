#include "BTTask_AmbientInspect.h"

UBTTask_AmbientInspect::UBTTask_AmbientInspect() {
    (*this).Duration.Min = 3.000000000e+00f;
    (*this).Duration.Max = 7.000000000e+00f;
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Ambient Inspect");
}

