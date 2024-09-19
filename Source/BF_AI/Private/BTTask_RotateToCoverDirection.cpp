#include "BTTask_RotateToCoverDirection.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "CoverPoint.h"

UBTTask_RotateToCoverDirection::UBTTask_RotateToCoverDirection() {
    (*this).AccaptedAngle = 2.500000000e+01f;
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482490"), UCoverPoint::StaticClass());
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Rotate To Cover Direction");
}

