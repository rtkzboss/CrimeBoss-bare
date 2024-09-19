#include "IGS_ZonesScalingConfig.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

FIGS_ZonesScalingConfig::FIGS_ZonesScalingConfig() {
    FRichCurveKey gen;
    gen.Value = 1.000000000e+00f;
    FRichCurveKey gen2;
    gen2.Time = 2.500000000e+03f;
    gen2.Value = 1.000000000e+00f;
    (*this).ZonesScalingCurve.EditorCurveData.Keys = TArray<FRichCurveKey>{gen, gen2};
    (*this).ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingCurve.ExternalCurve = nullptr;
}
