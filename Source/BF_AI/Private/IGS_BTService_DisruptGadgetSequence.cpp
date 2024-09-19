#include "IGS_BTService_DisruptGadgetSequence.h"
#include "IGS_ProgressGadgetBase.h"

UIGS_BTService_DisruptGadgetSequence::UIGS_BTService_DisruptGadgetSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestGadget_Object_2147482597"), AIGS_ProgressGadgetBase::StaticClass());
    (*this).BestGadget = gen;
    (*this).NodeName = TEXT("Disrupt Gadget Sequence");
}

