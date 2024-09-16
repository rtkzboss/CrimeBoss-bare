#include "BTTask_RunEQSQueryRandom.h"

UBTTask_RunEQSQueryRandom::UBTTask_RunEQSQueryRandom() {
    (*this).EQSQueryBlackboardKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).EQSQueryBlackboardKey, 0)) = 255;
    (*this).RandomItemCount = 3;
    (*this).NodeName = TEXT("Run EQS Query Random");
}

