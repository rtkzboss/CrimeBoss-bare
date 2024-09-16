#include "IGS_BTTask_SquadMoveToEscapePoint.h"

UIGS_BTTask_SquadMoveToEscapePoint::UIGS_BTTask_SquadMoveToEscapePoint() {
    (*this).EscapePointKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).EscapePointKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Move To Escape Point");
}

