#include "IGS_BTTask_SquadMoveToEscapePoint.h"
#include "IGS_WaypointFramework.h"

UIGS_BTTask_SquadMoveToEscapePoint::UIGS_BTTask_SquadMoveToEscapePoint() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("EscapePointKey_Object_2147482478"), AIGS_WaypointFramework::StaticClass());
    (*this).EscapePointKey = gen;
    (*this).NodeName = TEXT("Squad Move To Escape Point");
}

