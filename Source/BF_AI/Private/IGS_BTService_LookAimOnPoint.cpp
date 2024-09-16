#include "IGS_BTService_LookAimOnPoint.h"

UIGS_BTService_LookAimOnPoint::UIGS_BTService_LookAimOnPoint() {
    (*this).PointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).PointKey, 0)) = 255;
    (*this).NodeName = TEXT("Look Aim On Point");
}

