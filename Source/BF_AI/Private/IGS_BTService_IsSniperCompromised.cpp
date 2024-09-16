#include "IGS_BTService_IsSniperCompromised.h"

UIGS_BTService_IsSniperCompromised::UIGS_BTService_IsSniperCompromised() {
    (*this).IsCompromisedKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).IsCompromisedKey, 0)) = 255;
    (*this).NodeName = TEXT("IsSniperCompromised");
}

