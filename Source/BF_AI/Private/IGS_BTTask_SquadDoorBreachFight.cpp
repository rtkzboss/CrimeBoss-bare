#include "IGS_BTTask_SquadDoorBreachFight.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BreachRoles.h"

UIGS_BTTask_SquadDoorBreachFight::UIGS_BTTask_SquadDoorBreachFight() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BreachRolesKey_Object_2147482482"), UIGS_BreachRoles::StaticClass());
    (*this).BreachRolesKey = gen;
    (*this).NodeName = TEXT("Squad Fight");
}

