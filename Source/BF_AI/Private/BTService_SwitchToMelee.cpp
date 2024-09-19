#include "BTService_SwitchToMelee.h"
#include "EIGS_MeleeType.h"

UBTService_SwitchToMelee::UBTService_SwitchToMelee() {
    FBlackboardKeySelector gen;
    gen.AddEnumFilter(this, TEXT("UseMeleeKey_Enum_2147482602"), StaticEnum<EIGS_MeleeType>());
    (*this).UseMeleeKey = gen;
    (*this).ExtraDistanceFromRangeToStopMelee = 4.000000000e+02f;
    (*this).ExtraDistanceFromRangeToStopBash = 1.000000000e+02f;
    (*this).NodeName = TEXT("Switch To Melee");
}

