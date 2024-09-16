#include "IGS_BTTask_SquadDoorBreachThrowGrenade.h"

UIGS_BTTask_SquadDoorBreachThrowGrenade::UIGS_BTTask_SquadDoorBreachThrowGrenade() {
    (*this).BreachRolesKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Squad Breach Throw Grenade");
}

bool UIGS_BTTask_SquadDoorBreachThrowGrenade::HasFlashbangExploded(UIGS_AICommandBreachThrowFlashbang* Command) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadDoorBreachThrowGrenade::CommandToThrowFlashbang(AIGS_GameCharacterFramework* inAgent, FVector position, bool IsRight) {
    return nullptr;
}

