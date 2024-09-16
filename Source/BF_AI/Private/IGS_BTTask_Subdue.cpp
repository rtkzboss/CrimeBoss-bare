#include "IGS_BTTask_Subdue.h"

UIGS_BTTask_Subdue::UIGS_BTTask_Subdue() {
    (*this).CharToSubdueKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharToSubdueKey, 0)) = 255;
    (*this).NodeName = TEXT("Subdue");
}

