#include "BTTask_SetFollowRotation.h"

UBTTask_SetFollowRotation::UBTTask_SetFollowRotation() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    (*this).NodeName = TEXT("Set Follow Rotation");
}

