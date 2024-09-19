#include "BTDecorator_GR_IsSafeFromVehicle.h"
#include "IGS_GeneralReactionData_Base.h"

UBTDecorator_GR_IsSafeFromVehicle::UBTDecorator_GR_IsSafeFromVehicle() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482633"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    (*this).CheckInterval.Min = 4.000000060e-01f;
    (*this).CheckInterval.Max = 6.000000238e-01f;
    (*this).SafeDistanceFromLine = 4.000000000e+02f;
    (*this).SafeDistanceFromVehicle = 2.000000000e+02f;
    (*this).NodeName = TEXT("Is Safe from Vehicle");
}

