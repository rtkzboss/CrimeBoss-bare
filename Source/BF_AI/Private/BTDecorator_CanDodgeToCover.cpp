#include "BTDecorator_CanDodgeToCover.h"

UBTDecorator_CanDodgeToCover::UBTDecorator_CanDodgeToCover() {
    (*this).MoveToPositionKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    (*this).ReactToThreathKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Dodge To Cover");
}

