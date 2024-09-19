#include "IGS_BTTask_ThrowBags.h"
#include "IGS_ThrowBagDefinitionComponent.h"

UIGS_BTTask_ThrowBags::UIGS_BTTask_ThrowBags() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("ThrowRequestKey_Object_2147482474"), UIGS_ThrowBagDefinitionComponent::StaticClass());
    gen.AllowNoneAsValue(true);
    (*this).ThrowRequestKey = gen;
    (*this).NodeName = TEXT("Throw Loot");
}

