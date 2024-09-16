#include "IGS_BTTask_SquadMoveThroughBreachPoint.h"

UIGS_BTTask_SquadMoveThroughBreachPoint::UIGS_BTTask_SquadMoveThroughBreachPoint() {
    (*this).StackPosBlackboardKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).StackPosBlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Breach Move Through Breach Point");
}

