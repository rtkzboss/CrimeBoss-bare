#include "BTService_GR_EvadeGrenade.h"
#include "IGS_GeneralReactionData_Base.h"

UBTService_GR_EvadeGrenade::UBTService_GR_EvadeGrenade() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482580"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("BestEvadePosKey"));
    (*this).BestEvadePosKey = gen2;
    (*this).NodeName = TEXT("GlobalReaction - Evade Grenade");
}

