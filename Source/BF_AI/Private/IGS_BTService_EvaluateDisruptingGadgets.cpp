#include "IGS_BTService_EvaluateDisruptingGadgets.h"
#include "IGS_ProgressGadgetBase.h"

UIGS_BTService_EvaluateDisruptingGadgets::UIGS_BTService_EvaluateDisruptingGadgets() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BestGadget_Object_2147482592"), AIGS_ProgressGadgetBase::StaticClass());
    (*this).BestGadget = gen;
    (*this).NodeName = TEXT("Evaluate Disrupting Gadgets");
}

