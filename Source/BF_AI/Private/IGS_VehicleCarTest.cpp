#include "IGS_VehicleCarTest.h"

AIGS_VehicleCarTest::AIGS_VehicleCarTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxUpSuspension = 5.000000000e+00f;
    (*this).MaxDownSuspension = 1.500000000e+01f;
    (*this).WheelRadius = 3.000000000e+01f;
    (*this).GravityDefault = 5.000000000e+02f;
    (*this).WheelTurnSpeed = 3.000000000e+00f;
    (*this).bUseGravity = true;
    (*this).followDistance = 5.000000000e+00f;
}

