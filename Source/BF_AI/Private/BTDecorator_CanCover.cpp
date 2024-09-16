#include "BTDecorator_CanCover.h"

UBTDecorator_CanCover::UBTDecorator_CanCover() {
    (*this).BestCoverKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Can cover");
}

