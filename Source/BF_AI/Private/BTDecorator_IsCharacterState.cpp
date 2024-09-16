#include "BTDecorator_IsCharacterState.h"

UBTDecorator_IsCharacterState::UBTDecorator_IsCharacterState() {
    (*this).CharacterBlackboardKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharacterBlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Character State");
}

