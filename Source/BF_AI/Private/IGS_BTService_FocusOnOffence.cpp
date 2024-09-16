#include "IGS_BTService_FocusOnOffence.h"

UIGS_BTService_FocusOnOffence::UIGS_BTService_FocusOnOffence() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Focus On Offence");
}

