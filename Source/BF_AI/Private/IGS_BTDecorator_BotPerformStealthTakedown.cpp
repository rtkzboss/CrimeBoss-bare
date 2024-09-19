#include "IGS_BTDecorator_BotPerformStealthTakedown.h"
#include "IGS_GameCharacterFramework.h"

UIGS_BTDecorator_BotPerformStealthTakedown::UIGS_BTDecorator_BotPerformStealthTakedown() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("CharacterToShoutKey_Object_2147482638"), AIGS_GameCharacterFramework::StaticClass());
    (*this).CharacterToShoutKey = gen;
    (*this).NodeName = TEXT("Bot Perform Stealth Takedown");
}

