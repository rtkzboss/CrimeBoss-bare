#include "BTTask_Panic.h"

UBTTask_Panic::UBTTask_Panic() {
    (*this).Duration.Min = 5.000000000e+00f;
    (*this).Duration.Max = 8.000000000e+00f;
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Panicking");
}

