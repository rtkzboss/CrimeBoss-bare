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
    gen.Value = 1.000000000e+00f;
    FRichCurveKey gen2;
    gen2.Time = 2.500000000e+03f;
    gen2.Value = 1.000000000e+00f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys = TArray<FRichCurveKey>{gen, gen2};
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.ExternalCurve = nullptr;
}
