#include "IGS_BTTask_EvaluateBestCover.h"

UIGS_BTTask_EvaluateBestCover::UIGS_BTTask_EvaluateBestCover() {
    (*this).BestCoverKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Find Best Cover Point");
}

