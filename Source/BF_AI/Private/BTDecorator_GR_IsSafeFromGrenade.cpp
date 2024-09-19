#include "BTDecorator_GR_IsSafeFromGrenade.h"
#include "IGS_GeneralReactionData_Base.h"

UBTDecorator_GR_IsSafeFromGrenade::UBTDecorator_GR_IsSafeFromGrenade() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482634"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    (*this).CheckInterval.Min = 4.000000060e-01f;
    (*this).CheckInterval.Max = 6.000000238e-01f;
    (*this).ExplosionRangeMultiplier = 1.299999952e+00f;
    (*this).NodeName = TEXT("Is Safe from Grenade");
}

