#include "BTTask_DodgeToCover.h"

UBTTask_DodgeToCover::UBTTask_DodgeToCover() {
    (*this).IsDodgingKey.AllowedTypes = {nullptr, nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    (*this).MoveToPositionKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MoveToPositionKey, 0)) = 255;
    (*this).NodeName = TEXT("Dodge To Cover");
}

