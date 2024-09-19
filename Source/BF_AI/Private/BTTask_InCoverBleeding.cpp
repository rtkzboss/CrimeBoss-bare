#include "BTTask_InCoverBleeding.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "CoverPoint.h"

UBTTask_InCoverBleeding::UBTTask_InCoverBleeding() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482523"), UCoverPoint::StaticClass());
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("In Cover Bleeding");
}

