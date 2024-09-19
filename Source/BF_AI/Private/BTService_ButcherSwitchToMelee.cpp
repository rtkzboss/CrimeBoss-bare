#include "BTService_ButcherSwitchToMelee.h"
#include "EIGS_MeleeType.h"

UBTService_ButcherSwitchToMelee::UBTService_ButcherSwitchToMelee() {
    (*this).CheckTargetreachableTime = 2.000000000e+00f;
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("UseMeleeKey_Enum_2147482601"), StaticEnum<EIGS_MeleeType>());
    (*this).UseMeleeKey = gen;
}

