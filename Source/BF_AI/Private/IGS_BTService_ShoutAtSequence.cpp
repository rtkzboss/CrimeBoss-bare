#include "IGS_BTService_ShoutAtSequence.h"
#include "IGS_GameCharacterFramework.h"

UIGS_BTService_ShoutAtSequence::UIGS_BTService_ShoutAtSequence() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CharacterToShoutKey_Object_2147482562"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharacterToShoutKey = gen;
    (*this).NodeName = TEXT("Shout At Sequence");
}

