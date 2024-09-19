#include "IGS_BTService_ThrowSequence.h"
#include "IGS_ThrowBagDefinitionComponent.h"
#include "IGS_ThrowBagSlot.h"

UIGS_BTService_ThrowSequence::UIGS_BTService_ThrowSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ThrowRequestKey_Object_2147482555"), UIGS_ThrowBagDefinitionComponent::StaticClass());
    (*this).ThrowRequestKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("ThrowSlotKey_Object_2147482554"), UIGS_ThrowBagSlot::StaticClass());
    (*this).ThrowSlotKey = gen2;
    (*this).NodeName = TEXT("Throw Sequence");
}

