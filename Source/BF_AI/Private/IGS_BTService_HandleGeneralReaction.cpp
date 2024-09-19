#include "IGS_BTService_HandleGeneralReaction.h"
#include "IGS_GeneralReactionData_Base.h"

UIGS_BTService_HandleGeneralReaction::UIGS_BTService_HandleGeneralReaction() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482573"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    (*this).NodeName = TEXT("Handle Global Reaction(s)");
}

