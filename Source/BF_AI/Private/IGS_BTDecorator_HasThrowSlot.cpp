#include "IGS_BTDecorator_HasThrowSlot.h"
#include "IGS_ThrowBagSlot.h"

UIGS_BTDecorator_HasThrowSlot::UIGS_BTDecorator_HasThrowSlot() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ThrowSlotKey_Object_2147482632"), UIGS_ThrowBagSlot::StaticClass());
    (*this).ThrowSlotKey = gen;
    (*this).NodeName = TEXT("Has Throw Slot");
}

