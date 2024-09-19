#include "IGS_BTTask_MoveToWaypoint.h"
#include "IGS_WaypointFramework.h"
#include "GameFramework/Actor.h"

UIGS_BTTask_MoveToWaypoint::UIGS_BTTask_MoveToWaypoint() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("WaypointKey_Object_2147482500"), AIGS_WaypointFramework::StaticClass());
    (*this).WaypointKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddBoolFilter(this, TEXT("IsApproachMoveKey"));
    (*this).IsApproachMoveKey = gen2;
    FBlackboardKeySelector gen3;
    gen3.AddVectorFilter(this, TEXT("LookPosKey"));
    gen3.AllowNoneAsValue(true);
    (*this).LookPosKey = gen3;
    FBlackboardKeySelector gen4;
    gen4.AddFloatFilter(this, TEXT("AcceptableRadiusKey"));
    gen4.AllowNoneAsValue(true);
    (*this).AcceptableRadiusKey = gen4;
    FBlackboardKeySelector gen5;
    gen5.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482501"), AActor::StaticClass());
    gen5.AddVectorFilter(this, TEXT("BlackboardKey"));
    (*this).BlackboardKey = gen5;
    (*this).NodeName = TEXT("Move To Waypoint");
}

