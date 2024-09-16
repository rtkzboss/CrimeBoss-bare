#include "IGS_BTTask_SquadDoorBreachBase.h"

UIGS_BTTask_SquadDoorBreachBase::UIGS_BTTask_SquadDoorBreachBase() {
    (*this).BreachRolesKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BreachRolesKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Base Fight");
}

