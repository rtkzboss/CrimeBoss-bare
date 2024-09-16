#include "IGS_SlowdownConfig.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

FIGS_SlowdownConfig::FIGS_SlowdownConfig() {
    (*this).Radius = 7.000000000e+01f;
    (*this).MinMultiplier = 3.000000000e+00f;
    (*this).MaxMultiplier = 1.000000000e+00f;
    (*this).bUseStrengthCurve = true;
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
    gen2.Time = 1.000000000e+00f;
    gen2.Value = 1.000000000e+00f;
    gen2.ArriveTangent = 0.000000000e+00f;
    gen2.ArriveTangentWeight = 0.000000000e+00f;
    gen2.LeaveTangent = 0.000000000e+00f;
    gen2.LeaveTangentWeight = 0.000000000e+00f;
    (*this).SlowdownStrengthCurve.EditorCurveData.Keys = {MoveTemp(gen), MoveTemp(gen2)};
    (*this).SlowdownStrengthCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).SlowdownStrengthCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).SlowdownStrengthCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).SlowdownStrengthCurve.ExternalCurve = nullptr;
    (*this).bZonesScalingEnabled = false;
    FRichCurveKey gen3;
    gen3.InterpMode = RCIM_Linear;
    gen3.TangentMode = RCTM_Auto;
    gen3.TangentWeightMode = RCTWM_WeightedNone;
    gen3.Time = 0.000000000e+00f;
    gen3.Value = 1.000000000e+00f;
    gen3.ArriveTangent = 0.000000000e+00f;
    gen3.ArriveTangentWeight = 0.000000000e+00f;
    gen3.LeaveTangent = 0.000000000e+00f;
    gen3.LeaveTangentWeight = 0.000000000e+00f;
    FRichCurveKey gen4;
    gen4.InterpMode = RCIM_Linear;
    gen4.TangentMode = RCTM_Auto;
    gen4.TangentWeightMode = RCTWM_WeightedNone;
    gen4.Time = 2.500000000e+03f;
    gen4.Value = 1.000000000e+00f;
    gen4.ArriveTangent = 0.000000000e+00f;
    gen4.ArriveTangentWeight = 0.000000000e+00f;
    gen4.LeaveTangent = 0.000000000e+00f;
    gen4.LeaveTangentWeight = 0.000000000e+00f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys = {MoveTemp(gen3), MoveTemp(gen4)};
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.ExternalCurve = nullptr;
}
