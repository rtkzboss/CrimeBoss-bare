#include "BTTask_Strafe.h"

UBTTask_Strafe::UBTTask_Strafe() {
    (*this).IsDodgingKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    (*this).DodgeDistanceKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Strafe");
}

