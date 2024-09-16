#include "IGS_BTService_SetRotateLookAt.h"

UIGS_BTService_SetRotateLookAt::UIGS_BTService_SetRotateLookAt() {
    (*this).OutLookPos.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutLookPos, 0)) = 255;
    (*this).NodeName = TEXT("Set Rotate To Look At");
}

