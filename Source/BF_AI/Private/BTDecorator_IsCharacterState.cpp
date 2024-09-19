#include "BTDecorator_IsCharacterState.h"
#include "IGS_GameCharacterFramework.h"

UBTDecorator_IsCharacterState::UBTDecorator_IsCharacterState() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CharacterBlackboardKey_Object_2147482628"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharacterBlackboardKey = gen;
    (*this).NodeName = TEXT("Is Character State");
}

