#include "BTTask_InCover.h"

UBTTask_InCover::UBTTask_InCover() {
    (*this).CoverForwardPointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CoverForwardPointKey, 0)) = 255;
    (*this).RotationDelay = 8.000000119e-01f;
    (*this).BlackboardKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("In Cover");
}

