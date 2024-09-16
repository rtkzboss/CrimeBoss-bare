#include "IGS_BTService_MinigunnerHandleFocusPoints.h"

UIGS_BTService_MinigunnerHandleFocusPoints::UIGS_BTService_MinigunnerHandleFocusPoints() {
    (*this).MoveToLookAtPosition.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MoveToLookAtPosition, 0)) = 255;
    (*this).NodeName = TEXT("Minigunner Handle Focus Points");
}

