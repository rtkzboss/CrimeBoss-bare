#include "IGS_BTDecorator_CanBeSubdued.h"

UIGS_BTDecorator_CanBeSubdued::UIGS_BTDecorator_CanBeSubdued() {
    (*this).TargetKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).TargetKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Be Subdued");
}

