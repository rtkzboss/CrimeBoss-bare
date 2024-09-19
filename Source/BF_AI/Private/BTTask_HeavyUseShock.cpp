#include "BTTask_HeavyUseShock.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

UBTTask_HeavyUseShock::UBTTask_HeavyUseShock() {
    FBlackboardKeySelector gen;
    gen.AddBoolFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Heavy Use Shock");
}

