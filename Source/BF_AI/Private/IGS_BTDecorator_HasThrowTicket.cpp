#include "IGS_BTDecorator_HasThrowTicket.h"
#include "IGS_ThrowBagDefinitionComponent.h"
#include "IGS_ThrowBagSlot.h"

UIGS_BTDecorator_HasThrowTicket::UIGS_BTDecorator_HasThrowTicket() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ThrowRequestKey_Object_2147482631"), UIGS_ThrowBagDefinitionComponent::StaticClass());
    (*this).ThrowRequestKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("ThrowSlotKey_Object_2147482630"), UIGS_ThrowBagSlot::StaticClass());
    (*this).ThrowSlotKey = gen2;
    (*this).NodeName = TEXT("Has Throw Ticket");
}

