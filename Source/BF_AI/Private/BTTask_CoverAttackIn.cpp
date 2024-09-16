#include "BTTask_CoverAttackIn.h"

UBTTask_CoverAttackIn::UBTTask_CoverAttackIn() {
    (*this).CoverAttackType = EIGS_CoverAttackType::CAT_Unknown;
    (*this).DurationMin = 5.000000000e-01f;
    (*this).DurationMax = 1.000000000e+00f;
    (*this).TagretLastSeenPosition.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).TagretLastSeenPosition, 0)) = 255;
    (*this).NodeName = TEXT("Hide To Cover");
}

