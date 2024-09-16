#include "IGS_BTDecorator_HasThrowTicket.h"

UIGS_BTDecorator_HasThrowTicket::UIGS_BTDecorator_HasThrowTicket() {
    (*this).ThrowRequestKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    (*this).ThrowSlotKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Has Throw Ticket");
}

