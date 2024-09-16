#include "IGS_BTTask_SquadDoorBreachFight.h"

UIGS_BTTask_SquadDoorBreachFight::UIGS_BTTask_SquadDoorBreachFight() {
    (*this).BreachRolesKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Squad Fight");
}

