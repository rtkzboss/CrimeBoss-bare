#include "IGS_BTTask_RotateFromWall.h"

UIGS_BTTask_RotateFromWall::UIGS_BTTask_RotateFromWall() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    (*this).NodeName = TEXT("Rotate From Wall");
}

