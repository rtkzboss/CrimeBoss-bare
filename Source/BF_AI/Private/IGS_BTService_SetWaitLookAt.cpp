#include "IGS_BTService_SetWaitLookAt.h"

UIGS_BTService_SetWaitLookAt::UIGS_BTService_SetWaitLookAt() {
    (*this).OutLookPos.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutLookPos, 0)) = 255;
    (*this).NodeName = TEXT("Set Wait Look At");
}

