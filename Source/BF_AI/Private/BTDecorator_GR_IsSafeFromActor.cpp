#include "BTDecorator_GR_IsSafeFromActor.h"
#include "IGS_GeneralReactionData_Base.h"

UBTDecorator_GR_IsSafeFromActor::UBTDecorator_GR_IsSafeFromActor() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482635"), UIGS_GeneralReactionData_Base::StaticClass());
    gen.AddFloatFilter(this, TEXT("SafeRangeKey"));
    (*this).GeneralReactionDataKey = gen;
    (*this).SafeDistance = 5.000000000e+02f;
    (*this).CheckInterval.Min = 4.000000060e-01f;
    (*this).CheckInterval.Max = 6.000000238e-01f;
    (*this).SafeDistanceFromBB = true;
    (*this).SafeWhenHidden = true;
    (*this).NodeName = TEXT("Is Safe from Actor");
}

