#include "IGS_BTService_FocusOnPoint.h"

UIGS_BTService_FocusOnPoint::UIGS_BTService_FocusOnPoint() {
    (*this).PointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).PointKey, 0)) = 255;
    (*this).NodeName = TEXT("Focus On Point");
}

