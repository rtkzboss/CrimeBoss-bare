#include "IGS_ZonesScalingConfig.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

FIGS_ZonesScalingConfig::FIGS_ZonesScalingConfig() {
    FRichCurveKey gen;
    gen.InterpMode = RCIM_Linear;
    gen.TangentMode = RCTM_Auto;
    gen.TangentWeightMode = RCTWM_WeightedNone;
    gen.Time = 0.000000000e+00f;
    gen.Value = 1.000000000e+00f;
    gen.ArriveTangent = 0.000000000e+00f;
    gen.ArriveTangentWeight = 0.000000000e+00f;
    gen.LeaveTangent = 0.000000000e+00f;
    gen.LeaveTangentWeight = 0.000000000e+00f;
    FRichCurveKey gen2;
    gen2.InterpMode = RCIM_Linear;
    gen2.TangentMode = RCTM_Auto;
    gen2.TangentWeightMode = RCTWM_WeightedNone;
    gen2.Time = 2.500000000e+03f;
    gen2.Value = 1.000000000e+00f;
    gen2.ArriveTangent = 0.000000000e+00f;
    gen2.ArriveTangentWeight = 0.000000000e+00f;
    gen2.LeaveTangent = 0.000000000e+00f;
    gen2.LeaveTangentWeight = 0.000000000e+00f;
    (*this).ZonesScalingCurve.EditorCurveData.Keys = {MoveTemp(gen), MoveTemp(gen2)};
    (*this).ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingCurve.ExternalCurve = nullptr;
}
