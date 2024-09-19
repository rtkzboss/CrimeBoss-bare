#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BreachRoles.h"

UIGS_BTTask_SquadDoorBreachBase::UIGS_BTTask_SquadDoorBreachBase() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BreachRolesKey_Object_2147482484"), UIGS_BreachRoles::StaticClass());
    (*this).BreachRolesKey = gen;
    (*this).NodeName = TEXT("Squad Base Fight");
}

