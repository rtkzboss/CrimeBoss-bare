#include "BTService_ScoutSwitchToMelee.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_MeleeType.h"

UBTService_ScoutSwitchToMelee::UBTService_ScoutSwitchToMelee() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("UseMeleeKey_Enum_2147482565"), StaticEnum<EIGS_MeleeType>());
    (*this).UseMeleeKey = gen;
}

