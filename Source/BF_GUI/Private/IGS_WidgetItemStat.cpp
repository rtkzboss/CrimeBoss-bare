#include "IGS_WidgetItemStat.h"

UIGS_WidgetItemStat::UIGS_WidgetItemStat() : Super(FObjectInitializer::Get()) {
    (*this).TextColor = FLinearColor(6.000000238e-01f, 6.859999895e-01f, 5.649999976e-01f, 1.000000000e+00f);
    (*this).StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    (*this).StatValue = FText::FromString(TEXT("UNKNOWN_VALUE"));
}

