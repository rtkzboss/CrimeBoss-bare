#include "BTTask_SetUpdateCover.h"

UBTTask_SetUpdateCover::UBTTask_SetUpdateCover() {
    (*this).UpdateCoverKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Set Update Cover");
}

