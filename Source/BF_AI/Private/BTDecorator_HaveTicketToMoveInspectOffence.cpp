#include "BTDecorator_HaveTicketToMoveInspectOffence.h"

UBTDecorator_HaveTicketToMoveInspectOffence::UBTDecorator_HaveTicketToMoveInspectOffence() {
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Have Ticket To Move Inspect");
}

