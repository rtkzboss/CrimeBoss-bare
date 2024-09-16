#include "IGS_BTTask_FindBestEscapePoint.h"

UIGS_BTTask_FindBestEscapePoint::UIGS_BTTask_FindBestEscapePoint() {
    (*this).EscapePointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).EscapePointKey, 0)) = 255;
    (*this).NodeName = TEXT("Find Best Escpae Point");
}

