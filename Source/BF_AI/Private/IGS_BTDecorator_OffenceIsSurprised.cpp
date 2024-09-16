#include "IGS_BTDecorator_OffenceIsSurprised.h"

UIGS_BTDecorator_OffenceIsSurprised::UIGS_BTDecorator_OffenceIsSurprised() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Offence Is Surprised");
}

