#include "BTDecorator_SquadEscapeSequence.h"
#include "IGS_WaypointFramework.h"

UBTDecorator_SquadEscapeSequence::UBTDecorator_SquadEscapeSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("EscapePointKey_Object_2147482613"), AIGS_WaypointFramework::StaticClass());
    (*this).EscapePointKey = gen;
    (*this).NodeName = TEXT("Squad Escape Sequence");
}

