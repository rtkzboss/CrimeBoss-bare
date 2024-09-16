#include "IGS_BTService_FocusOnActor.h"

UIGS_BTService_FocusOnActor::UIGS_BTService_FocusOnActor() {
    (*this).ActorKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ActorKey, 0)) = 255;
    (*this).NodeName = TEXT("Focus On Actor");
}

