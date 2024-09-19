#include "HoudiniParameterColor.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterColor::UHoudiniParameterColor() {
    (*this).Color = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).ParmType = EHoudiniParameterType::Color;
}

