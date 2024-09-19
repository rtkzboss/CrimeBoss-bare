#include "BTService_GR_FleeFromArea.h"
#include "IGS_GeneralReactionData_Base.h"

UBTService_GR_FleeFromArea::UBTService_GR_FleeFromArea() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482577"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("EvadePosKey"));
    (*this).EvadePosKey = gen2;
    (*this).EQSCooldown = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Flee from Area");
}

