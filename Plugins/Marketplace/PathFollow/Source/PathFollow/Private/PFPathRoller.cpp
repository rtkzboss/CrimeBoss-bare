#include "PFPathRoller.h"
#include "UObject/NoExportTypes.h"

FPFPathRoller::FPFPathRoller() {
    (*this)._rollAnglesCurve.Points = TArray<FInterpCurvePointVector>{};
    (*this)._rollAnglesCurve.bIsLooped = false;
    (*this)._rollAnglesCurve.LoopKeyOffset = 0.000000000e+00f;
    (*this)._curves = TArray<UObject*>{};
}
