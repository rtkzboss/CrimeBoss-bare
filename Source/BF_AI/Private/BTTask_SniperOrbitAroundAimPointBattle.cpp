#include "BTTask_SniperOrbitAroundAimPointBattle.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_WaypointBase.h"

UBTTask_SniperOrbitAroundAimPointBattle::UBTTask_SniperOrbitAroundAimPointBattle() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("SnipePointKey_Object_2147482485"), AIGS_WaypointBase::StaticClass());
    (*this).SnipePointKey = gen;
    (*this).NodeName = TEXT("Sniper orbit around aim point Battle");
}

