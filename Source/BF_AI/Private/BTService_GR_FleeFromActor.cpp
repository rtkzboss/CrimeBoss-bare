#include "BTService_GR_FleeFromActor.h"
#include "IGS_GeneralReactionData_Base.h"

UBTService_GR_FleeFromActor::UBTService_GR_FleeFromActor() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482578"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddVectorFilter(this, TEXT("BestEvadePosKey"));
    (*this).BestEvadePosKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddFloatFilter(this, TEXT("SafeDistanceKey"));
    (*this).SafeDistanceKey = gen3;
    (*this).SafeDistance = 5.000000000e+02f;
    (*this).SafeDistanceFromBB = true;
    (*this).EQSCooldown = 1.000000000e+00f;
    (*this).InnerRangeMultiplier = 1.200000048e+00f;
    (*this).OuterRangeMultiplier = 1.700000048e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Flee From Actor");
}

