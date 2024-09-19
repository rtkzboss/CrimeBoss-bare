#include "IGS_BTTask_SquadBreachRemoveDoors.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BreachRoles.h"

UIGS_BTTask_SquadBreachRemoveDoors::UIGS_BTTask_SquadBreachRemoveDoors() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BreachRolesKey_Object_2147482483"), UIGS_BreachRoles::StaticClass());
    (*this).BreachRolesKey = gen;
    (*this).NodeName = TEXT("Squad Breach Remove Doors");
}

bool UIGS_BTTask_SquadBreachRemoveDoors::IsObstacleCleared(UIGS_AICommandBreachRemoveObstacle* Command) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadBreachRemoveDoors::CommandToClearObstacle(AIGS_GameCharacterFramework* inAgent, AActor* BreachableObject, bool IsRight) {
    return nullptr;
}

