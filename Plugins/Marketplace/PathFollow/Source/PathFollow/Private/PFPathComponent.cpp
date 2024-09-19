#include "PFPathComponent.h"
#include "UObject/NoExportTypes.h"

UPFPathComponent::UPFPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DrawerConfig.bDrawIfNotSelected = true;
    (*this).DrawerConfig.bDrawIfSelected = true;
    (*this).DrawerConfig.PathColor.B = 255;
    (*this).DrawerConfig.PathColor.A = 255;
    (*this).DrawerConfig.Thickness = 5.000000000e+00f;
    FInterpCurvePointFloat gen;
    gen.OutVal = 1.000000000e+00f;
    FInterpCurvePointFloat gen2;
    gen2.InVal = 1.000000000e+02f;
    gen2.OutVal = 1.000000000e+00f;
    (*this)._speedCurve._speedCurve.Points = TArray<FInterpCurvePointFloat>{gen, gen2};
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

