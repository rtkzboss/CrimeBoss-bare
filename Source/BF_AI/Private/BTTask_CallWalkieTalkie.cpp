#include "BTTask_CallWalkieTalkie.h"

UBTTask_CallWalkieTalkie::UBTTask_CallWalkieTalkie() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Call Walkie Talkie");
}

