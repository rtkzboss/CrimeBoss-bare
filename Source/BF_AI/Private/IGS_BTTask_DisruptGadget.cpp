#include "IGS_BTTask_DisruptGadget.h"
#include "IGS_ProgressGadgetBase.h"

UIGS_BTTask_DisruptGadget::UIGS_BTTask_DisruptGadget() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("DisruptingGadget_Object_2147482538"), AIGS_ProgressGadgetBase::StaticClass());
    (*this).DisruptingGadget = gen;
    (*this).NodeName = TEXT("Disrupt Gadget");
}

