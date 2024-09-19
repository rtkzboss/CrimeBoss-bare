#include "IGS_WidgetStatBar.h"

UIGS_WidgetStatBar::UIGS_WidgetStatBar() : Super(FObjectInitializer::Get()) {
    (*this).ProgressBarBackground = FLinearColor(2.999999933e-02f, 3.700000048e-02f, 3.429999948e-02f, 1.000000000e+00f);
    (*this).ProgressBarForeground = FLinearColor(6.000000238e-01f, 6.859999895e-01f, 5.649999976e-01f, 1.000000000e+00f);
    (*this).TextColor = FLinearColor(6.000000238e-01f, 6.859999895e-01f, 5.649999976e-01f, 1.000000000e+00f);
    (*this).StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    (*this).StatMaxValue = 1.000000000e+03f;
}

