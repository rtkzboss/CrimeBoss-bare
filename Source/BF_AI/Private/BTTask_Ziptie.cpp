#include "BTTask_Ziptie.h"

UBTTask_Ziptie::UBTTask_Ziptie() {
    (*this).CivToZiptieKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CivToZiptieKey, 0)) = 255;
    (*this).NodeName = TEXT("Ziptie");
}

