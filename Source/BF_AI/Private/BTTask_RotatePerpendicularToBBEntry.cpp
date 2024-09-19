#include "BTTask_RotatePerpendicularToBBEntry.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

UBTTask_RotatePerpendicularToBBEntry::UBTTask_RotatePerpendicularToBBEntry() {
    (*this).Precision = 1.000000000e+01f;
    FBlackboardKeySelector gen;
    gen.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Rotate perpendicular to BB entry");
}

