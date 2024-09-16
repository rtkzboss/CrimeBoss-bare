#include "BTDecorator_CanRollToCover.h"

UBTDecorator_CanRollToCover::UBTDecorator_CanRollToCover() {
    (*this).DodgeDistanceKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Roll To Cover");
}

