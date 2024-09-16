#include "IGS_BTService_DetectiveHandleImmortality.h"

UIGS_BTService_DetectiveHandleImmortality::UIGS_BTService_DetectiveHandleImmortality() {
    (*this).ReviveChargesKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ReviveChargesKey, 0)) = 255;
    (*this).DetectiveInitKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DetectiveInitKey, 0)) = 255;
    (*this).NodeName = TEXT("Detective Handle Immortality");
}

