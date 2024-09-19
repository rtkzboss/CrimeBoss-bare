#include "IGS_VirtualCursorSettings.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

UIGS_VirtualCursorSettings::UIGS_VirtualCursorSettings() {
    FRichCurveKey gen;
    gen.Time = 1.000000000e+00f;
    gen.Value = 1.000000000e+00f;
    (*this).VirtualCursorAccelerationCurve.EditorCurveData.Keys = TArray<FRichCurveKey>{FRichCurveKey{}, gen};
    (*this).VirtualCursorAccelerationCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).VirtualCursorAccelerationCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).VirtualCursorAccelerationCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).MaxVirtualCursorSpeed = 1.300000000e+03f;
    (*this).MaxVirtualCursorSpeedWhenHovering = 6.500000000e+02f;
    (*this).VirtualCursorDragCoefficient = 8.000000000e+00f;
    (*this).VirtualCursorDragCoefficientWhenHovering = 1.400000000e+01f;
    (*this).MinVirtualCursorSpeed = 5.000000000e+00f;
    (*this).VirtualCursorDeadZone = 1.500000060e-01f;
    (*this).VirtualCursorAccelerationMultiplier = 9.000000000e+03f;
    (*this).VirtualCursorSize = 4.000000000e+01f;
    (*this).VirtualHardwareCursorNormal = TEXT("T_GUI_VirtualCursor");
    (*this).VirtualHardwareCursorHovering = TEXT("T_GUI_VirtualCursor_Hover");
    (*this).NativeHardwareCursorNormal = TEXT("T_GUI_NativeCursor");
    (*this).NativeHardwareCursorHovering = TEXT("T_GUI_NativeCursor");
    (*this).VirtualHardwareCursorHotspot.X = 5.000000000e-01f;
    (*this).VirtualHardwareCursorHotspot.Y = 5.000000000e-01f;
}

