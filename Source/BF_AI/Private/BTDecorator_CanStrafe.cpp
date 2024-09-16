#include "BTDecorator_CanStrafe.h"

UBTDecorator_CanStrafe::UBTDecorator_CanStrafe() {
    (*this).DodgeDistanceKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).UseLongStrafe = true;
    (*this).UseMediumStrafe = true;
    (*this).NodeName = TEXT("Can Strafe");
}

