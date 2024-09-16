#include "IGS_BTService_SentryTarget.h"

UIGS_BTService_SentryTarget::UIGS_BTService_SentryTarget() {
    (*this).BestTarget.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestTarget, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Best Target");
}

