#include "IGS_BTTask_Subdue.h"
#include "IGS_GameCharacterFramework.h"

UIGS_BTTask_Subdue::UIGS_BTTask_Subdue() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CharToSubdueKey_Object_2147482476"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharToSubdueKey = gen;
    (*this).NodeName = TEXT("Subdue");
}

