#include "IGS_BTService_SolveCharactersToControl.h"
#include "IGS_GameCharacterFramework.h"

UIGS_BTService_SolveCharactersToControl::UIGS_BTService_SolveCharactersToControl() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CharacterToZiptieKey_Object_2147482560"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharacterToZiptieKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("CharacterToShoutAt_Object_2147482559"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharacterToShoutAt = gen2;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Solve Civilian ToZip");
}

