#include "IGS_BTDecorator_OffenceIsSurprised.h"
#include "IGS_OffenceData.h"

UIGS_BTDecorator_OffenceIsSurprised::UIGS_BTDecorator_OffenceIsSurprised() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OffenceDataKey_Object_2147482616"), UIGS_OffenceData::StaticClass());
    (*this).OffenceDataKey = gen;
    (*this).NodeName = TEXT("Offence Is Surprised");
}

