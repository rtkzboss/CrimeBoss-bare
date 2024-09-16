#include "IGS_BTService_SetAnimCommandLookAt.h"

UIGS_BTService_SetAnimCommandLookAt::UIGS_BTService_SetAnimCommandLookAt() {
    (*this).OutLookPos.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OutLookPos, 0)) = 255;
    (*this).NodeName = TEXT("Set Anim Command Look At");
}

