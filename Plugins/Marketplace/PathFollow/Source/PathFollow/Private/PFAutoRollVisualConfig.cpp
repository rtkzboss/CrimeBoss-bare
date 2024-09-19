#include "PFAutoRollVisualConfig.h"

FPFAutoRollVisualConfig::FPFAutoRollVisualConfig() {
    (*this).bHidePointsVisualization = false;
    (*this).bHideTextInfo = false;
    (*this).LineLength = 5.000000000e+01f;
    (*this).PointColor = FLinearColor(0.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).SelectedPointColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).PointSize = 2.000000000e+01f;
    (*this).LineThickness = 3.000000000e+00f;
}
