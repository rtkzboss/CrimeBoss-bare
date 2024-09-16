#include "PFPathComponent.h"
#include "UObject/NoExportTypes.h"

UPFPathComponent::UPFPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DrawerConfig.bDrawIfNotSelected = true;
    (*this).DrawerConfig.bDrawIfSelected = true;
    (*this).DrawerConfig.PathColor.B = 255;
    (*this).DrawerConfig.PathColor.A = 255;
    (*this).DrawerConfig.Thickness = 5.000000000e+00f;
    FInterpCurvePointFloat gen;
    gen.InVal = 0.000000000e+00f;
    gen.OutVal = 1.000000000e+00f;
    gen.ArriveTangent = 0.000000000e+00f;
    gen.LeaveTangent = 0.000000000e+00f;
    gen.InterpMode = CIM_Linear;
    FInterpCurvePointFloat gen2;
    gen2.InVal = 1.000000000e+02f;
    gen2.OutVal = 1.000000000e+00f;
    gen2.ArriveTangent = 0.000000000e+00f;
    gen2.LeaveTangent = 0.000000000e+00f;
    gen2.InterpMode = CIM_Linear;
    (*this)._speedCurve._speedCurve.Points = {MoveTemp(gen), MoveTemp(gen2)};
}

float UPFPathComponent::GetTimeForPath() {
    return 0.000000000e+00f;
}

FVector UPFPathComponent::GetLocationAtSplinePointMirrored(int32 PointIdx, ESplineCoordinateSpace::Type CoordinateSpace) const {
    return FVector{};
}

FVector UPFPathComponent::GetLocationAtSplineInputKeyMirrored(float Key, ESplineCoordinateSpace::Type CoordinateSpace) const {
    return FVector{};
}

FVector UPFPathComponent::GetLocationAtDistanceAlongSplineMirrored(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) const {
    return FVector{};
}

