#include "BTTask_AlertCharacter.h"

UBTTask_AlertCharacter::UBTTask_AlertCharacter() {
    (*this).CharacterToAlert.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToAlert, 0)) = 255;
    (*this).OffenceDataKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Alert Character");
}

