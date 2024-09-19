#include "PFSpeedCurve.h"
#include "UObject/NoExportTypes.h"

FPFSpeedCurve::FPFSpeedCurve() {
    (*this)._speedCurve.Points = TArray<FInterpCurvePointFloat>{};
    (*this)._speedCurve.bIsLooped = false;
    (*this)._speedCurve.LoopKeyOffset = 0.000000000e+00f;
}
