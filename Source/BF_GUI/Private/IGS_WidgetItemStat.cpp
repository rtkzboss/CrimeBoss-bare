#include "IGS_WidgetItemStat.h"

UIGS_WidgetItemStat::UIGS_WidgetItemStat() : Super(FObjectInitializer::Get()) {
    (*this).TextColor.R = 6.000000238e-01f;
    (*this).TextColor.G = 6.859999895e-01f;
    (*this).TextColor.B = 5.649999976e-01f;
    (*this).TextColor.A = 1.000000000e+00f;
    (*this).StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    (*this).StatValue = FText::FromString(TEXT("UNKNOWN_VALUE"));
}

