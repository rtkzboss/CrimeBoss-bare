#include "IGS_BTService_ZiptieSequence.h"
#include "IGS_GameCharacterFramework.h"

UIGS_BTService_ZiptieSequence::UIGS_BTService_ZiptieSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CivToZiptieKey_Object_2147482548"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CivToZiptieKey = gen;
    (*this).NodeName = TEXT("Ziptie Sequence");
}

