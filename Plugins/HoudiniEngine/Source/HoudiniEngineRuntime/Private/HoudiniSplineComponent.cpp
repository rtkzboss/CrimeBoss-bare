#include "HoudiniSplineComponent.h"

UHoudiniSplineComponent::UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CurvePoints = TArray<FTransform>{FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00)), FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(2.000000000e+02,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00))};
    FVector gen;
    gen.X = 2.000000000e+02f;
    (*this).DisplayPoints = TArray<FVector>{FVector{}, gen};
    (*this).CurveOrder = 2;
    (*this).bIsHoudiniSplineVisible = true;
    (*this).bCookOnCurveChanged = true;
    (*this).NodeId = -1;
}

