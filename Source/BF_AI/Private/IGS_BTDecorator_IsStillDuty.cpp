#include "IGS_BTDecorator_IsStillDuty.h"

UIGS_BTDecorator_IsStillDuty::UIGS_BTDecorator_IsStillDuty() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Still Duty");
}

