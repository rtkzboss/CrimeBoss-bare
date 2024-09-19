#include "IGS_BTTask_ThrowBagSlotTransformToBB.h"
#include "IGS_ThrowBagSlot.h"

UIGS_BTTask_ThrowBagSlotTransformToBB::UIGS_BTTask_ThrowBagSlotTransformToBB() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ThrowSlotKey_Object_2147482471"), UIGS_ThrowBagSlot::StaticClass());
    (*this).ThrowSlotKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("ThrowSlotPositionKey"));
    (*this).ThrowSlotPositionKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddRotatorFilter(this, TEXT("ThrowSlotLookAtPositionKey"));
    (*this).ThrowSlotLookAtPositionKey = gen3;
    (*this).NodeName = TEXT("Throw Bag Slot Transform To BB");
}

