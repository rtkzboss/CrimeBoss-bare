#include "BTTask_WaitForOnGround.h"

UBTTask_WaitForOnGround::UBTTask_WaitForOnGround() {
    (*this).CivlianToZipKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CivlianToZipKey, 0)) = 255;
    (*this).NodeName = TEXT("Wait For On Ground");
}

