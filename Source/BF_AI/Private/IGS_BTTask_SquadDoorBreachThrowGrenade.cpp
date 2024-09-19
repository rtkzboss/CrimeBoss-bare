#include "IGS_BTTask_SquadDoorBreachThrowGrenade.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BreachRoles.h"

UIGS_BTTask_SquadDoorBreachThrowGrenade::UIGS_BTTask_SquadDoorBreachThrowGrenade() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BreachRolesKey_Object_2147482479"), UIGS_BreachRoles::StaticClass());
    (*this).BreachRolesKey = gen;
    (*this).NodeName = TEXT("Squad Breach Throw Grenade");
}

bool UIGS_BTTask_SquadDoorBreachThrowGrenade::HasFlashbangExploded(UIGS_AICommandBreachThrowFlashbang* Command) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadDoorBreachThrowGrenade::CommandToThrowFlashbang(AIGS_GameCharacterFramework* inAgent, FVector position, bool IsRight) {
    return nullptr;
}

