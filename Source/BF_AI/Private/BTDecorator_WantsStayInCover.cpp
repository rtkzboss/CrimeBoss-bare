#include "BTDecorator_WantsStayInCover.h"

UBTDecorator_WantsStayInCover::UBTDecorator_WantsStayInCover() {
    (*this).RefreshTime = 1.000000015e-01f;
    (*this).CoverKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CoverKey, 0)) = 255;
    (*this).BestCoverKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Want to stay in cover");
}

