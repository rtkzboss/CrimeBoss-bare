#include "IGS_BulletBendingConfig.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

FIGS_BulletBendingConfig::FIGS_BulletBendingConfig() {
    (*this).MinStartRadius = 4.500000000e+01f;
    (*this).MaxStartRadius = 4.500000000e+01f;
    (*this).MinFullPowerRadius = 3.000000000e+01f;
    (*this).MaxFullPowerRadius = 3.000000000e+01f;
    (*this).HipFireZoneScale = 1.000000000e+00f;
    (*this).bUseInterpolationCurve = true;
    FRichCurveKey gen;
    gen.Time = 1.000000000e+00f;
    gen.Value = 1.000000000e+00f;
    (*this).InterpolationCurve.EditorCurveData.Keys = TArray<FRichCurveKey>{FRichCurveKey{}, gen};
    (*this).InterpolationCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).InterpolationCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).InterpolationCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).InterpolationCurve.ExternalCurve = nullptr;
    (*this).bZonesScalingEnabled = false;
    FRichCurveKey gen2;
    gen2.Value = 1.000000000e+00f;
    FRichCurveKey gen3;
    gen3.Time = 2.500000000e+03f;
    gen3.Value = 1.000000000e+00f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.Keys = TArray<FRichCurveKey>{gen2, gen3};
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).ZonesScalingConfig.ZonesScalingCurve.ExternalCurve = nullptr;
}
