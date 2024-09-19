#include "BTTask_SniperOrbitAroundAimPoint.h"
#include "IGS_WaypointBase.h"

UBTTask_SniperOrbitAroundAimPoint::UBTTask_SniperOrbitAroundAimPoint() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("SnipePointKey_Object_2147482486"), AIGS_WaypointBase::StaticClass());
    (*this).SnipePointKey = gen;
    (*this).AimType = EIGS_AimType::Combat;
    (*this).NodeName = TEXT("Sniper orbit around aim point");
}

