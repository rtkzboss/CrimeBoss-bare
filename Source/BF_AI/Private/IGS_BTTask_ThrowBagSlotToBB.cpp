#include "IGS_BTTask_ThrowBagSlotToBB.h"
#include "IGS_ThrowBagDefinitionComponent.h"
#include "IGS_ThrowBagSlot.h"

UIGS_BTTask_ThrowBagSlotToBB::UIGS_BTTask_ThrowBagSlotToBB() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ThrowRequestKey_Object_2147482473"), UIGS_ThrowBagDefinitionComponent::StaticClass());
    (*this).ThrowRequestKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("ThrowSlotKey_Object_2147482472"), UIGS_ThrowBagSlot::StaticClass());
    (*this).ThrowSlotKey = gen2;
    (*this).NodeName = TEXT("Throw Bag Slot To BB");
}

