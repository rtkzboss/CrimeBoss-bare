#include "BTDecorator_IsInDistanceOf.h"

UBTDecorator_IsInDistanceOf::UBTDecorator_IsInDistanceOf() {
    (*this).bIsBlackBoardDistance = true;
    (*this).DistanceBlackboardKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DistanceBlackboardKey, 0)) = 255;
    (*this).TargetBlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).TargetBlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Is In Distance Of");
}

