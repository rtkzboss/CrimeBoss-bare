#include "HoudiniParameterColor.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterColor::UHoudiniParameterColor() {
    (*this).Color.R = 1.000000000e+00f;
    (*this).Color.G = 1.000000000e+00f;
    (*this).Color.B = 1.000000000e+00f;
    (*this).Color.A = 1.000000000e+00f;
    (*this).ParmType = EHoudiniParameterType::Color;
}


