#include "IGS_BTTask_FindBestEscapePoint.h"
#include "IGS_WaypointFramework.h"

UIGS_BTTask_FindBestEscapePoint::UIGS_BTTask_FindBestEscapePoint() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("EscapePointKey_Object_2147482534"), AIGS_WaypointFramework::StaticClass());
    (*this).EscapePointKey = gen;
    (*this).NodeName = TEXT("Find Best Escpae Point");
}

