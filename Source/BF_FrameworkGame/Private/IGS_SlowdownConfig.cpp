#include "IGS_SlowdownConfig.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

FIGS_SlowdownConfig::FIGS_SlowdownConfig() {
    (*this).Radius = 7.000000000e+01f;
    (*this).MinMultiplier = 3.000000000e+00f;
    (*this).MaxMultiplier = 1.000000000e+00f;
    (*this).bUseStrengthCurve = true;
    FRichCurveKey gen;
    gen.Value = 1.000000000e+00f;
    FRichCurveKey gen2;
    gen2.Time = 1.000000000e+00f;
    gen2.Value = 1.000000000e+00f;
    (*this).SlowdownStrengthCurve.EditorCurveData.Keys = TArray<FRichCurveKey>{gen, gen2};
    (*this).SlowdownStrengthCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).SlowdownStrengthCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).SlowdownStrengthCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).SlowdownStrengthCurve.ExternalCurve = nullptr;
    (*this).bZonesScalingEnabled = false;
    FRichCurveKey gen3;
    gen3.Value = 1.000000000e+00f;
    FRichCurveKey gen4;
    gen4.Time = 2.500000000e+03f;
    gen4.Value = 1.000000000e+00f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys = TArray<FRichCurveKey>{gen3, gen4};
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.ExternalCurve = nullptr;
}
