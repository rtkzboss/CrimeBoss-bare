#include "BTTask_CoverAttackOut.h"

UBTTask_CoverAttackOut::UBTTask_CoverAttackOut() {
    (*this).CoverAttackType = EIGS_CoverAttackType::CAT_Unknown;
    (*this).TagretLastSeenPosition.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).TagretLastSeenPosition, 0)) = 255;
    (*this).CoverForwardPoint.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CoverForwardPoint, 0)) = 255;
    (*this).NodeName = TEXT("Peak From Cover");
}

