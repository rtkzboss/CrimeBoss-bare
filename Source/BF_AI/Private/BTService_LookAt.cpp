#include "BTService_LookAt.h"

UBTService_LookAt::UBTService_LookAt() {
    (*this).LookAtBlackBoardKey.AllowedTypes = {nullptr, nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).LookAtBlackBoardKey, 0)) = 255;
    (*this).LookAtStartMaxAngle = 6.000000000e+01f;
    (*this).LookAtStopMaxAngle = 9.000000000e+01f;
    (*this).NodeName = TEXT("Look At Service");
}

