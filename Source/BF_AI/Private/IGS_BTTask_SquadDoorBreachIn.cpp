#include "IGS_BTTask_SquadDoorBreachIn.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BreachRoles.h"

UIGS_BTTask_SquadDoorBreachIn::UIGS_BTTask_SquadDoorBreachIn() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BreachRolesKey_Object_2147482481"), UIGS_BreachRoles::StaticClass());
    (*this).BreachRolesKey = gen;
    (*this).NodeName = TEXT("Squad Breach In");
}

bool UIGS_BTTask_SquadDoorBreachIn::IsCommandActive(UIGS_AICommand* AICommand) {
    return false;
}

