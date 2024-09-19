#include "IGS_BTService_ApproachWaypointRotation.h"
#include "IGS_WaypointBase.h"

UIGS_BTService_ApproachWaypointRotation::UIGS_BTService_ApproachWaypointRotation() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("WaypointKey_Object_2147482604"), AIGS_WaypointBase::StaticClass());
    (*this).WaypointKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("ApproachNotifiedKey"));
    (*this).ApproachNotifiedKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddVectorFilter(this, TEXT("OutRotationKey"));
    (*this).OutRotationKey = gen3;
    (*this).NodeName = TEXT("Approach To Waypoint Rotation");
}

