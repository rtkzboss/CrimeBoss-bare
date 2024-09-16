#include "IGS_SoftLockConfig.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

FIGS_SoftLockConfig::FIGS_SoftLockConfig() {
    (*this).SoftLockZoneRadius = 1.000000000e+02f;
    (*this).MaxDistance = 1.500000000e+03f;
    (*this).LockStrength = 6.000000238e-01f;
    (*this).TimeWithoutStickInputToDisableSoftLock = 2.500000000e-01f;
    (*this).StickInputDeadzoneForSoftLock = 1.000000015e-01f;
    (*this).StrengthDecayStartPitch = 7.000000000e+01f;
    (*this).bZonesScalingEnabled = false;
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
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys = {MoveTemp(gen), MoveTemp(gen2)};
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.ExternalCurve = nullptr;
}
