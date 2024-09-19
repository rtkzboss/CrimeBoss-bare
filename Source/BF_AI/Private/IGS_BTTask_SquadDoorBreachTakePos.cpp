#include "IGS_BTTask_SquadDoorBreachTakePos.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BreachRoles.h"

UIGS_BTTask_SquadDoorBreachTakePos::UIGS_BTTask_SquadDoorBreachTakePos() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BreachRolesKey_Object_2147482480"), UIGS_BreachRoles::StaticClass());
    (*this).BreachRolesKey = gen;
    (*this).NodeName = TEXT("Squad Breach Take Pos");
}

void UIGS_BTTask_SquadDoorBreachTakePos::OnNotifyReceived(EIGS_AINotif Type, AIGS_GameCharacterFramework* Instigator, AIGS_GameCharacterFramework* Target, FVector Pos, FVector dir) {
}

bool UIGS_BTTask_SquadDoorBreachTakePos::IsCommandActive(UIGS_AICommand* AICommand) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadDoorBreachTakePos::CommandToTakePosition(AIGS_GameCharacterFramework* agent, FVector InPos, FVector inMoveLookPos, FVector inFinalLookPos, EIGS_AIMontageBreachVariant MontageVariant) {
    return nullptr;
}

