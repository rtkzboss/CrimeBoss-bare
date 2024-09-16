#include "IGS_BTDecorator_BotPerformStealthTakedown.h"

UIGS_BTDecorator_BotPerformStealthTakedown::UIGS_BTDecorator_BotPerformStealthTakedown() {
    (*this).CharacterToShoutKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutKey, 0)) = 255;
    (*this).NodeName = TEXT("Bot Perform Stealth Takedown");
}

