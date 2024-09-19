#include "BTDecorator_ZiptieSequence.h"
#include "IGS_GameCharacterFramework.h"

UBTDecorator_ZiptieSequence::UBTDecorator_ZiptieSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CivToZiptieKey_Object_2147482608"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CivToZiptieKey = gen;
    (*this).NodeName = TEXT("Ziptie Sequence");
}

