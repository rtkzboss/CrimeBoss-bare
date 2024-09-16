#include "BTTask_RollToCover.h"

UBTTask_RollToCover::UBTTask_RollToCover() {
    (*this).DodgeDistanceKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Roll To Cover");
}

