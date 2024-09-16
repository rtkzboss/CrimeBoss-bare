#include "IGS_BTService_LookAimOnActor.h"

UIGS_BTService_LookAimOnActor::UIGS_BTService_LookAimOnActor() {
    (*this).ActorKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ActorKey, 0)) = 255;
    (*this).NodeName = TEXT("Look Aim On Actor");
}

