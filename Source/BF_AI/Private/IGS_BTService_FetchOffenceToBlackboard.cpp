#include "IGS_BTService_FetchOffenceToBlackboard.h"

UIGS_BTService_FetchOffenceToBlackboard::UIGS_BTService_FetchOffenceToBlackboard() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Fetch Offence To Blackboard");
}

