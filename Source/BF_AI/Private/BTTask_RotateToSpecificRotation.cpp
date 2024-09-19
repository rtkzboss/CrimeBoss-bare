#include "BTTask_RotateToSpecificRotation.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

UBTTask_RotateToSpecificRotation::UBTTask_RotateToSpecificRotation() {
    (*this).AcceptedAngle = 5.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddRotatorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Rotate To Specific Rotation");
}

